#include <stdio.h>
/*
Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.
*/
int main (){
    int tables[3][10],i,j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; i <10 ; j++)
        {
           if (i==0)
           {
              tables[i][j] = 2*(j+1);
              printf("%d,", tables[i][j]);
           }
           else if (i==1){
             tables[i][j] = 7*(j+1);
             printf("%d,", tables[i][j]);
           }
           else{
            tables[i][j] = 9*(j+1);
            printf("%d,", tables[i][j]);
           }
           
        }
        
        printf("\n");
        
    }
    
return 0;
}