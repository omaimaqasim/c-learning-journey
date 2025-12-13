#include<stdio.h>

int main(){
int a =4;

printf("%d %d %d",a,++a,a++);
/*
what will be output
6 6 4
4 5 5 both are correct 
why compiler give this answer because if we do something to same variable in
printf then it can evaluate from left to right or right to left
then what is the solution of this do increment and decrement in saperate variable

*/

    return 0;
}