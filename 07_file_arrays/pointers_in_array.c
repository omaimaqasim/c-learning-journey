#include <stdio.h>

int main (){
    int marks[] = {22,44,55,66},i;

    int* ptr = &marks[0];
    // int* ptr = marks;
// these both are same give address of element 1 so we can get address of element one of array by this
// remember that there address will be contigious 


// now we will do example of printing values using pointer

for ( i = 0; i < 4; i++)
{
    // printf("the value in index %d is %d\n",i,*ptr);
    printf("the value in index %d is %d\n",i,*ptr);
    // ptr++;
}



return 0;
}