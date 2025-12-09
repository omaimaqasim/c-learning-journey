#include<stdio.h>
// 10. Write a program to check whether a given number is prime or not using loops.
int main(){
int number,count=0;

printf("enter a number :\n");
scanf("%d",&number);

int i=number;
while (i>=1)
{

     if (number%i==0)
     {
        count++;
     }

     i--;
     
}


if (count==2)
{
   printf("its a prime number");
}
else{
    printf("its not a prime number");
}


    return 0;
}