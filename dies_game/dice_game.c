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

void re_roll_dice(int *die, int size, int turns);
void re_roll_dice(int *die, int size, int turns)
{
    int permission, i, j, rerollPositions[5] = {0}, selected_position;
    // if for ask permission for re roll
    if (turns != 0)
    {

        printf("\n\nWant to re-roll dice?(enter 1=\"yes\", 0=\"no\")\nyou have two turn to re roll the dice\n");
        scanf("%d", &permission);

        if (permission == 1)
        {
            turns--;

            printf("select position (1 to 5) of dice which you want to re-roll\n select 0 if you done selecting position\n");

            // getting position of dice which to re roll
            for (i = 0; i < 5; i++)
            {

                scanf("%d", &selected_position);
                //  second if for checking how many dice want to re-roll :return if 0
                if (selected_position == 0)
                    break;
                else if (selected_position >= 1 && selected_position <= 5)
                {
                    rerollPositions[i] = selected_position;
                }
                else
                {
                    printf("enter correct position\n");
                }
            }

            // change selected dice
            for (i = 1; i <= 5; i++)
            {

                for (j = 0; j < 5; j++)
                {
                    // third if : for checking position same as index of dice arr
                    if (i == rerollPositions[j])
                    {
                        *(die + (i - 1)) = (rand() % 6) + 1;
                    }
                }
            }
        }
    }
    else
    {
        printf("you turns to re-roll the dice finished\n");
    }
}

// function for printing dice
void display_dice(int *dice);
void display_dice(int *dice)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(dice + i));
    }
}
int main()
{
    int dice[5], i, turns = 2;

    srand(time(NULL));

    //&dice[0] = dice both give the address of first element of array
    dice_rolling(dice, 5);

    // printing dice
    display_dice(dice);

    // RE ROLL THE DICE
    re_roll_dice(dice, 5, turns);

    // printing dice
    display_dice(dice);

    return 0;
}