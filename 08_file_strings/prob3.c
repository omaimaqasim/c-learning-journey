#include <stdio.h>
//. Write your own version of strlen function from <string.h>

int strlen(char str[]);
int strlen( char str[]){

        int i=0,count=0;
         
       while (str[i]!='\0')
       {
           count++;
           i++;
       }

       return count;
    
}

int main (){
    char str[] = "zeyden_khan";
    

       printf("%d\n",strlen(str));
   
   
    

    
return 0;
}