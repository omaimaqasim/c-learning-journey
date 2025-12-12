#include<stdio.h>
// A recursive function is a function that calls itself inside its own body.

int factorial(int a);

int factorial(int a){

    if (a==1 || a==0)
    {
       return 1;
    }
    else{

        return factorial(a-1) * a;
    }

}
int main(){
 
    int n=5;
    printf("%d factorial is %d",n,factorial(n));
    return 0;
}