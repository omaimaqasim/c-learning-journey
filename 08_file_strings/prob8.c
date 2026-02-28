#include <stdio.h>

int main (){
    // Write a program to count the occurrence of a given character in a string
  char word[] = "zeydenkhan";
  char c = 'K';

  int count = 0 , i=0;

//   if char is capital then convert to lower case
if (c>'A' && c<'Z')
{
     c+=32;
}

  while (word[i] != '\0')
  {
      if (word[i] == c)
      {
        count++;
      }
      i++;
  }

  printf("%d\n",count);
  
  
  


return 0;
}