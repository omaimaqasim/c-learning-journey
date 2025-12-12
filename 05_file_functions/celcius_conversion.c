#include<stdio.h>

float temp_conversion(float c);

float temp_conversion(float c){

    return (c*(9.0/5.0)) + 32;
}
int main(){

    float temp = 33.2;

    printf("%.2f temperature in fahrenhiet is %.2f",temp,temp_conversion(temp));
    return 0;
}