#include <stdio.h>

typedef struct complex_no
{
    int real_part;
    int complex_part;
}complex;
int main (){
    
    complex c1 = {2,3};

    printf("complex no is = %d + %di\n",c1.real_part,c1.complex_part);
    
return 0;
}