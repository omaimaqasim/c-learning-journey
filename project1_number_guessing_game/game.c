#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// use rightclick + change all occurance it select all words similar to that word
int main()
{
    int guess_number, count_try = 0;
    // initialize random seed using current time
    srand(time(NULL));

    // generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // takes input from user

    do
    {
        printf("enter guess number from 1 to 100: \n");
        scanf("%d", &guess_number);

        if (guess_number > randomNumber)
        {
            printf("lower number please\n");
        }

        else if (guess_number < randomNumber)
        {
            printf("higher number please\n");
        }

        count_try++;

    } while (guess_number != randomNumber);

    printf("you guessed right after %d tries\n", count_try);

    return 0;
}
