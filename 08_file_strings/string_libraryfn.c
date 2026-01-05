#include <stdio.h>
#include <string.h>

int main (){
    char str[] = "zeyden";
    char copy[20] ;
    char str2[] = " khan";
//for copying string use strcopy(destination,source)
    strcpy(copy,str);

// for getting string length use strlen() fn
  printf("%d\n",strlen(str));
  printf("%s\n",copy);

  //for adding two string use fn strcat(str1,str2)

  printf("%s\n",strcat(str,str2));
  
  
  
return 0;
}