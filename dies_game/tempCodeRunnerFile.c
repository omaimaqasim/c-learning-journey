#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice_rolling(int *die, int size);
void dice_rolling(int *die, int size)
{

    int i;

    printf("\n\t\t\t=================================\n");
    printf(" \t\t\t     🎲 DICE ROLLING GAME 🎲\n");
    printf("\t\t\t=================================\n");
    printf("Press ENTER to roll 5 dice...\t");
    getchar();

    for (i = 0; i < size; i++)
    {

        *(die + i) = (rand() % 6) + 1;
    }
}

// re roll dice

void re_roll_dice(int *die, int size);
void re_roll_dice(int *die, int size)
{
    int permission, i, rerollPositions[5], selected_position;
    printf("\n\nWant to re-roll dice?(enter 1=\"yes\", 0=\"no\")\nyou have two turn to re roll the dice\n");
    scanf("%d", &permission);

    if (permission == 1)
    {
        printf("select position (1 to 5) of dice which you want to re-roll\n select 0 if you done selecting position\n");

        // getting position of dice which to re roll
        for (i = 0; i < 5; i++)
        {

            scanf("%d", &selected_position);
            // return if 0
            if (selected_position == 0)
                return;
            else if (selected_position>=1 || selected_position<=6)
            {
                rerollPositions[i] = selected_position;
            }
            else{
                printf("enter correct position\n");
                
            }
        }

    }

 for ( i = 0; i < 5; i++)
 {
    printf("%d\n", rerollPositions[i]);
    
 }
 
    
}
int main()
{
    int dice[5], i;

    srand(time(NULL));

    //&dice[0] = dice both give the address of first element of array
    dice_rolling(dice, 5);

    // printing dice
    for (i = 0; i < 5; i++)
    {
        printf("%d ", dice[i]);
    }

    // RE ROLL THE DICE
    re_roll_dice(dice,5);

    return 0;
}