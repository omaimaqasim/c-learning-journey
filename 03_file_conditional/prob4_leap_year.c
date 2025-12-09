// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include<stdio.h>

int main(){
int check_year;

printf("enter year: \n");
scanf("%d",&check_year);

if ((check_year%4==0 && check_year%100!=0) || check_year%400==0)
{
    printf("yes %d is leap year",check_year);
}
else{
     printf("no %d is not leap year",check_year);
}

    return 0;
}


// Every number divisible by 400 is also divisible by 4.
// ✔ True.
// BUT

// Not every number divisible by 4 is divisible by 400.
// ✘ False.

// ✔ A year divisible by 400 is ALWAYS a leap year,
// even though it IS divisible by 100.