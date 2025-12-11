#include<stdio.h>
#include<math.h>
// question is to find area of square using library function we use math.h library for this,as it contains all function of math

int main(){
    int a = 4;

    printf("the area of square is %.0f \n",pow(a,2));
    // we use %f instead of %d because pow fn return values in float
    return 0;
}