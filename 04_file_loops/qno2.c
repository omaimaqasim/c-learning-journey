#include<stdio.h>
// 5. Write a program to sum first ten natural numbers using while loop.

int main(){
int i=1,sum=0;

while (i<=10)
{
    sum+=i;
    i++;
}

printf("%d",sum);

    return 0;
}