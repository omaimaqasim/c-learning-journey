// reverse the string
#include <stdio.h>
#include <string.h>

void reverse(char str[], int size);
void reverse(char str[],int size){
   int i,temp;
 
   for ( i = 0; i <= (size/2); i++)
   {
      temp = str[i];
      str[i]= str[size-1-i];
      str[size-1-i] = temp;
   
      
   }

//    printing the reverse
 for ( i = 0; i < size; i++)
 {
    printf("%c",str[i]);
    
 }
 
   
    
}

int main (){
    char str[] = "zeydenkhan";


    reverse(str,strlen(str));
return 0;
}