#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int random_dice;

    printf("\t \t==========================================\n");
    printf("\t \t \tTwo-Player Dice Rolling Game\n ");
    printf("\t \t==========================================\n");

    // random dice roll
    srand(time(NULL));

    random_dice = rand() % 100 + 1;

    printf("%d", random_dice);

    // using do while loop for player one die rolling until die is 1

    // do
    // {
    //    printf("player 1 rolls : ");
    // } while ();

    return 0;
}