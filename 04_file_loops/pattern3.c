/*
       *
      * *
    *  *  *

*/


#include <stdio.h>

int main (){
   int i,j,k,input;

   printf("enter no\n");
   scanf("%d", &input);
   
   

   for ( i = 1; i <=input; i++)
   {
    
        for ( j = 1; j <= (input-i); j++)
        {
            
            printf(" ");
            
        }

        for ( k = 1; k<=i; k++)
        {
            printf("* ");
            
        }
        
        
        printf("\n");
        
   }
   

   
return 0;
}