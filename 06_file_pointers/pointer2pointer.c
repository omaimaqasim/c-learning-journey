#include<stdio.h>

int main(){
   int a = 33;
    int* j = &a;
    // remember this concept * cancel out & like 7/7 cancel out 


    
printf("the value of a is %d \n",a);
printf("the value of a is %d \n",*(&a));
printf("the value of a is %d \n",*j);
printf("the value of a is %d \n",**(&j));
    return 0;
}