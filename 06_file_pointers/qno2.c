#include <stdio.h>
/*
2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/
int* address (int i);
int* address (int i){
   printf("the address of i : %p",&i);
}

int main (){
    int i=22;

    printf("i address is : %p\n",&i);
    address(i);
return 0;
}