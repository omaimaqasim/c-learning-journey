#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void play_turn(int player_no, int *, int *);
void play_turn(int player_no, int *score, int *turn)
{

    int random_dice;
    *score = 0, *turn = 0;

    do
    {
        // random dice roll
        random_dice = rand() % 7;

        printf("\nplayer %d rolls : %d \n", player_no, random_dice);

        // increase turn and score if random dice is not 0
        if (random_dice != 0)
        {
            *score += random_dice;
            printf("player %d current score : %d \n", player_no, *score);
            (*turn)++;
        }

    } while (random_dice != 0);
}

int main()
{
    int player1_score, player2_score, p1_turn, p2_turn, p1_result, p2_result;

    printf("\t \t==========================================\n");
    printf("\t \t \tTwo-Player Dice Rolling Game\n ");
    printf("\t \t==========================================\n");

    // seed for random number by current time
    srand(time(NULL));
    // calling function
    play_turn(1, &player1_score, &p1_turn);
    play_turn(2, &player2_score, &p2_turn);

    // individual result calculating
    p1_result = player1_score / p1_turn;
    p2_result = player2_score / p2_turn;

    // printing individual average scores
    // debug error soon it is not showing correct result
    printf("Player 1 average score per turn: %.2f\n", p1_result);
    printf("Player 2 average score per turn: %.2f\n", p2_result);

    // checking who is winner
    if (p1_result > p2_result)
    {
        printf("Player 01 is winner with score : %d \n", player1_score);
    }
    else if (p1_result < p2_result)
    {
        printf("Player 02 is winner with score : %d \n", player2_score);
    }
    else
    {
        printf("It's a tie!\n");
    }

    return 0;
}