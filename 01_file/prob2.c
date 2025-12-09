// simple interest = principal*rate*time/100
#include<stdio.h>

int main(){
     float principal, rate, time, simple_interest;

     printf("enter principal:");
     scanf("%f",&principal);

     printf("\nenter rate:");
     scanf("%f",&rate);

     printf("\nenter time:");
     scanf("%f",&time);

       simple_interest = (principal*rate*time)/100;

     printf("\nsimple interest is:%.2f",simple_interest);
      
    return 0;
}