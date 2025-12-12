#include<stdio.h>

int fibonacci(int n);
int fibonacci(int n){

    if (n==1 || n==2)
    {
        return n-1;
    }

    return fibonacci(n-1) + fibonacci(n-2) ;
}
int main(){

    int n = 6;
    printf("fibonacci series of %d is %d",n,fibonacci(n));
    return 0;
}