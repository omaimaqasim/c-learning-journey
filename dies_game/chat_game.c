#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void rollDice(int dice[]) {
    for (int i = 0; i < 5; i++)
        dice[i] = rand() % 6 + 1;
}

void displayDice(int dice[]) {
    for (int i = 0; i < 5; i++)
        printf("%d ", dice[i]);
    printf("\n");
}

void countFrequency(int dice[], int freq[]) {
    for (int i = 0; i < 6; i++)
        freq[i] = 0;

    for (int i = 0; i < 5; i++)
        freq[dice[i] - 1]++;
}

int checkFullHouse(int freq[]) {
    int two = 0, three = 0;

    for (int i = 0; i < 6; i++) {
        if (freq[i] == 2) two = 1;
        if (freq[i] == 3) three = 1;
    }

    if (two == 1 && three == 1)
        return 25;
    else
        return 0;
}

int checkStraight(int freq[], int length) {
    int count = 0;

    for (int i = 0; i < 6; i++) {
        if (freq[i] > 0) {
            count++;
            if (count == length) {
                if (length == 4) return 30;
                else return 40;
            }
        } else {
            count = 0;
        }
    }

    return 0;
}

int calculateScore(int dice[], int category) {
    int freq[6];
    int sum = 0;

    countFrequency(dice, freq);

    for (int i = 0; i < 5; i++)
        sum += dice[i];

    if (category >= 0 && category <= 5)
        return freq[category] * (category + 1);

    if (category == 6) { // Three of a kind
        for (int i = 0; i < 6; i++)
            if (freq[i] >= 3)
                return sum;
    }

    if (category == 7) { // Four of a kind
        for (int i = 0; i < 6; i++)
            if (freq[i] >= 4)
                return sum;
    }

    if (category == 8)
        return checkFullHouse(freq);

    if (category == 9)
        return checkStraight(freq, 4);

    if (category == 10)
        return checkStraight(freq, 5);

    if (category == 11) { // Yahtzee
        for (int i = 0; i < 6; i++)
            if (freq[i] == 5)
                return 50;
    }

    if (category == 12)
        return sum;  // Chance

    return 0;
}

int calculateBonus(int score[]) {
    int upperSum = 0;

    for (int i = 0; i < 6; i++)
        if (score[i] != -1)
            upperSum += score[i];

    if (upperSum >= 63)
        return (int)sqrt(pow(35, 2));  // using math library
    else
        return 0;
}

void computerTurn(int dice[], int score[]) {
    rollDice(dice);

    int bestScore = 0;
    int bestCategory = -1;

    for (int i = 0; i < 13; i++) {
        if (score[i] == -1) {
            int tempScore = calculateScore(dice, i);
            if (tempScore > bestScore) {
                bestScore = tempScore;
                bestCategory = i;
            }
        }
    }

    score[bestCategory] = bestScore;
}

void displayScoreboard(int score[2][13]) {
    int total[2] = {0, 0};

    for (int p = 0; p < 2; p++) {

        if (p == 0)
            printf("\nPlayer Scores:\n");
        else
            printf("\nComputer Scores:\n");

        for (int i = 0; i < 13; i++) {
            if (score[p][i] != -1) {
                printf("Category %d: %d\n", i, score[p][i]);
                total[p] += score[p][i];
            }
        }

        int bonus = calculateBonus(score[p]);
        total[p] += bonus;

        printf("Bonus: %d\n", bonus);
        printf("Total: %d\n", total[p]);
    }

    if (total[0] > total[1])
        printf("\nPlayer Wins!\n");
    else if (total[1] > total[0])
        printf("\nComputer Wins!\n");
    else
        printf("\nIt is a Tie!\n");
}

int main() {
    int dice[5];
    int score[2][13];
    int choice;

    srand(time(0));

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 13; j++)
            score[i][j] = -1;

    do {
        printf("\n1. Start Game\n2. View Rules\n3. View Scoreboard\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            for (int round = 0; round < 13; round++) {
                printf("\nRound %d\n", round + 1);

                rollDice(dice);
                displayDice(dice);

                int category;

                do {
                    printf("Choose category (0-12): ");
                    scanf("%d", &category);
                } while (category < 0 || category > 12 || score[0][category] != -1);

                score[0][category] = calculateScore(dice, category);

                computerTurn(dice, score[1]);
            }

            displayScoreboard(score);
        }

        else if (choice == 2) {
            printf("\nGame Rules:\n");
            printf("Roll 5 dice and choose a category.\n");
            printf("Each category can be used once.\n");
            printf("Bonus 35 points if upper section >= 63.\n");
        }

        else if (choice == 3) {
            displayScoreboard(score);
        }

    } while (choice != 4);

    return 0;
}
