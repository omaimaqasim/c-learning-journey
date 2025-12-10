#include<stdio.h>

// 0,1,1,2,3,5,8  make series like this until input number
int main(){

  int number_of_terms,sum=0,i=0,j=1;
  printf("enter number of terms: \n");
  scanf("%d",&number_of_terms);


  for ( i = 0; i < number_of_terms; i++)
  {
    if (i==0 || i==1)
    {
        printf("%d",i);
    }
    else{
        printf("%d",sum+=j);
        j++;
    }
    
  }
  



    return 0;
}