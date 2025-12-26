#include <stdio.h>
// Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
// print the content of this 2-d array on the screen


int main()
{
    // ths is 2d array
    int numbers[3][2], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter the value of numbers[%d][%d] :\n",i,j);
            scanf("%d", &numbers[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,",numbers[i][j]);
           
        }
        printf("\n");
    }

    return 0;
}