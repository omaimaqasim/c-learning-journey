// for compling download compiler name mingw

#include<stdio.h>
int main(){
    char name[12],a='b';
     printf("enter name :");
    //  for storing string we dont need to write & because string
    // already has address so it does not need this
    scanf("%s",name);
    printf("%s",name);

    // now cheking what will it print
     printf("\n%c",a);
      printf("\n%d",a);
       printf("\n%f",a);
    return 0 ;
}