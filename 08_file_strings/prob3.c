#include <stdio.h>
//. Write your own version of strlen function from <string.h>
int main (){
    char str[] = "zeyden_khan";
    int i=0,count=0;
     
   while (str!='\O')
   {
       count++;
       i++;
   }

   printf("%d\n",count);
   
   
    

    
return 0;
}