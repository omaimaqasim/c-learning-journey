#include<stdio.h>

int main(){
int a=3,j=1,i;
/*
make this pattern
 *
 ***
 *****

 formula is 2i-1
*/

for ( i = 1; i <=3  ; i++)
{

    for ( j = 1; j <= (2*i)-1 ; j++)
    {
         printf("*");
    }

    printf("\n");
    
    
}



    return 0;
}