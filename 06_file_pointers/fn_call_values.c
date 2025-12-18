#include <stdio.h>

// there are tow types of fn call
//  1. call by values exp:
int sum(int a, int b);

int sum(int a, int b) {
    return a + b;
}

int main (){
 int x=2,y=3;
    printf("sum : %d",sum(x,y));  //this is fn call by values example: it give x and y copy to function not orinal values
    // mean we cant change values of x and y by function but we can change it by refrence call fn

    
return 0;
}