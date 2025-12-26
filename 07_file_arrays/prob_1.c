#include <stdio.h>
/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.
*/
int main (){
    int numbers[10],i;
    int* ptr = &numbers[0];
    
    for ( i = 0; i < 10; i++)
    {
        numbers[i] = i+i;
        printf("%d\n",numbers[i]);
    }
    
    printf("\n%d\n",*ptr);

    
return 0;
}