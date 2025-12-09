// 2. Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>

int main(){
 int num=10,i=num,sum_answers=0,answer;

 while (i>0)
 {
    answer= num*i;
    sum_answers+=answer;
    printf("%d x %d = %d \n",num,i,answer);
    i--;
 }

  printf("%d\n",sum_answers);
 


    return 0;
}