#include<stdio.h>

int main(){
//   Typecasting means converting one data type into another manually.
int a = 3;
// manually
float b = (int) a;
// automatically
float c = a;
// now this will convert a to float
printf("%f",b);
    return 0;
}