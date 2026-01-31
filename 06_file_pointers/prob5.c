#include <stdio.h>
int* sum(int a ,int b);
int* sum(int a ,int b){
   int s = a+b;
   int* ptr1 = &s;
   printf("sum is %d\n",s);
  return ptr1;
   
}

int* avg(int a , int b);
int* avg(int a , int b){
  float avg = (a+b)/2;
  float* ptr2 = &avg;
  printf("avg is %d\n",avg);
  return ptr2;
//   understanding why it destroy variable before return 
  
}

int main (){
    int a = 10 , b = 4;

    int* sum(a,b);
     int* avg(a,b);
return 0;
}