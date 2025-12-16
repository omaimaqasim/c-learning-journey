#include<stdio.h>

int main(){
    int a = 33;
// pointer is a variable that store address of another variable
    int* j = &a;
    // this is the format to store address of variable
    char c = 'c';
    char* j2 = &c;

printf("the address of %d is %p \n",a,&a);
printf("the address of %d is %p \n",a,j);
printf("the address of %c is %p \n",c,&c);
printf("the address of %c is %p \n",c,j2);
// if we want address of that variable then we use & that mean address
// Use %p whenever you want the address of a variable.
// Use %u when you want to print an unsigned number in decimal.
  // %p by default show address in hexadecimal


//   now if you want value that has been stored in such address then we write * 
// for example
printf("the value that store in %p address is %d\n",j,*j);
return 0;
}