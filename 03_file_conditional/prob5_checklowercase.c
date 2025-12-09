// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

#include<stdio.h>

int main(){
char check_case ;
int asciiValue;

printf("enter char: \n");
scanf("%c",&check_case);

asciiValue = check_case;

if(asciiValue>=64 && asciiValue<=90){
   printf("you enter uppercase => %c \n",check_case);
}
 else if (asciiValue>=97 && asciiValue<=122){
     printf("you enter lowercase => %c \n",check_case);
}
else{
    printf("enter correct alphabet");
}
    return 0;
}