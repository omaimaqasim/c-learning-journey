#include <stdio.h>
/*
       *
      * *
    *  *  *

    SPACES + STARS = SHAPE
SPACES + STARS = SHAPE


*/
int main (){
    
    int i,j,k,row;

    printf("enter no of rows:");
    scanf("%d", &row);
    

    for ( i = 0; i <row; i++)
    {
        for ( j = 1; j <=(row-i); j++)
        {
           printf("  ");
        }

        for ( k = 0; k<=i  ; k++)
        {
 
               printf("*   ");
               
           
        }
        
        printf("\n");
        
        
    }
    
return 0;
}