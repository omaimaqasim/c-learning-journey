#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void play_turn(int player_no);
void play_turn(int player_no)
{

    int score = 0,turn = 0,random_dice;

    do
    {
        // random dice roll
        random_dice = rand() % 7;

        printf("player %d rolls : %d \n", player_no, random_dice);
       
        // increase turn and score if random dice is not 0
        if (random_dice!=0)
        {
            score += random_dice;
            turn++;
        }
        
    } while (random_dice != 0);

    printf("score : %d and turns : %d", score, turn);
}

int main()
{
   
    printf("\t \t==========================================\n");
    printf("\t \t \tTwo-Player Dice Rolling Game\n ");
    printf("\t \t==========================================\n");
    
    // seed for random number by current time
    srand(time(NULL));
    play_turn(1);

    return 0;
}