#include<stdio.h>

int main(){
   float marks1, marks2, marks3, total_percent;

  printf("enter marks of subject 1: ");
  scanf("%f", &marks1);

  printf("enter marks of subject 2: ");
  scanf("%f", &marks2);

  printf("enter marks of subject 3: ");
  scanf("%f", &marks3);

  total_percent = ((marks1 + marks2 + marks3) / 300) * 100;

  if (total_percent >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33) {
      printf("pass\n");
  }
  else {
      printf("fail\n");
  }

} 