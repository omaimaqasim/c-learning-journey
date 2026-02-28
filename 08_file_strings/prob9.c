#include <stdio.h>

int main (){
    // Write a program to check whether a given character is present in a string or not.
  char word[] = "zeydenkhan";
  char c = 'K';
  int check= 0 , i=0;
  //   if char is capital then convert to lower case
if (c>'A' && c<'Z')
{
     c+=32;
}

  
  while (word[i] != '\0')
  {
    if (word[i] == c)
    {
       
       check = 1; 
       break;
    }
    
   i++ ;
  }

  if (check==1)
  {
    printf("yes this char is present\n");
    
  }
  else{
        printf("no this char is not present\n");
  }
  
  
return 0;
}