#include <stdio.h>

int main (){
  char sentence[60];
  
  printf("enter a sentence:\n");
//we use gets to get input with spaces and we use puts
// to print and it move the cursor to next line
  gets(sentence);
  puts(sentence);
 printf("hey then");
 
  
return 0;
}