#include <stdio.h>
// write a program with structure representing a complex number
// now make an array of 5 complex number and show there values after taking input 
// from the user

struct complex_no
{
    int real_part;
    int complex_part;
};

int main (){
  struct complex_no c1 = {3,4};
  struct complex_no complex_no5[5] ;
  int i;

  for ( i = 0; i < 5; i++)
  {
    printf("enter values for complex no %d : \n",i+1);
    scanf("%d %d", &complex_no5[i].real_part,&complex_no5[i].complex_part);
    
  }
  for ( i = 0; i < 5; i++)
  {
    
    printf("complex no %d = %d + %di\n",i+1,complex_no5[i].real_part,complex_no5[i].complex_part);
    
    
  }
  
  

  printf("complex number = %d + %di\n",c1.real_part,c1.complex_part);
  

return 0;
}