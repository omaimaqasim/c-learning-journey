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

void rerollDice(int dice[]) {
    int turns = 2, choice, pos;

    while (turns > 0) {
        printf("Re-roll? (1=yes, 0=no): ");
        scanf("%d", &choice);
        if (choice == 0) break;

        turns--;
        printf("Enter positions (1-5), 0 to stop:\n");
        while (1) {
            scanf("%d", &pos);
            if (pos == 0) break;
            if (pos >= 1 && pos <= 5)
                dice[pos - 1] = rand() % 6 + 1;
        }
        displayDice(dice);
    }
}

void countFreq(int dice[], int freq[]) {
    for (int i = 0; i < 6; i++) freq[i] = 0;
    for (int i = 0; i < 5; i++) freq[dice[i] - 1]++;
}

int checkFullHouse(int freq[]) {
    int two = 0, three = 0;
    for (int i = 0; i < 6; i++) {
        if (freq[i] == 2) two = 1;
        if (freq[i] == 3) three = 1;
    }
    return (two && three) ? 25 : 0;
}

int checkStraight(int freq[], int len) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (freq[i]) {
            count++;
            if (count == len)
                return (len == 4) ? 30 : 40;
        } else count = 0;
    }
    return 0;
}

int calculateScore(int dice[], int cat) {
    int freq[6], sum = 0;
    countFreq(dice, freq);

    for (int i = 0; i < 5; i++) sum += dice[i];

    if (cat <= 5) return freq[cat] * (cat + 1);
    if (cat == 6) for (int i = 0; i < 6; i++) if (freq[i] >= 3) return sum;
    if (cat == 7) for (int i = 0; i < 6; i++) if (freq[i] >= 4) return sum;
    if (cat == 8) return checkFullHouse(freq);
    if (cat == 9) return checkStraight(freq, 4);
    if (cat == 10) return checkStraight(freq, 5);
    if (cat == 11) for (int i = 0; i < 6; i++) if (freq[i] == 5) return 50;
    if (cat == 12) return sum;

    return 0;
}

int calculateBonus(int score[]) {
    int upper = 0;
    for (int i = 0; i < 6; i++)
        if (score[i] != -1) upper += score[i];

    return (upper >= 63) ? (int)sqrt(pow(35, 2)) : 0;
}

void computerTurn(int dice[], int score[]) {
    rollDice(dice);
    int bestCat = -1, bestScore = 0;

    for (int i = 0; i < 13; i++) {
        if (score[i] == -1) {
            int s = calculateScore(dice, i);
            if (s > bestScore) {
                bestScore = s;
                bestCat = i;
            }
        }
    }
    score[bestCat] = bestScore;
}

void displayScoreboard(int score[2][13]) {
    for (int p = 0; p < 2; p++) {
        int total = 0;
        printf(p == 0 ? "\nPlayer: " : "\nComputer: ");
        for (int i = 0; i < 13; i++)
            if (score[p][i] != -1)
                total += score[p][i];
        printf("Total = %d\n", total);
    }
}

int main() {
    int dice[5], score[2][13];
    int choice, cat;

    srand(time(NULL));

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 13; j++)
            score[i][j] = -1;

    do {
        printf("\n1. Start Game\n2. Rules\n3. Scoreboard\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int round = 0; round < 13; round++) {
                printf("\n--- Round %d ---\n", round + 1);
                rollDice(dice);
                displayDice(dice);
                rerollDice(dice);

                printf("Choose category (0-12): ");
                scanf("%d", &cat);
                if (score[0][cat] == -1)
                    score[0][cat] = calculateScore(dice, cat);

                computerTurn(dice, score[1]);
            }

            score[0][12] += calculateBonus(score[0]);
            score[1][12] += calculateBonus(score[1]);

            displayScoreboard(score);
        }

        else if (choice == 2) {
            printf("Roll dice, choose categories, highest score wins.\n");
        }

        else if (choice == 3) {
            displayScoreboard(score);
        }

    } while (choice != 4);

    return 0;
}
