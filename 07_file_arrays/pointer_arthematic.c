#include <stdio.h>

int main (){
    int a = 22;
    int* ptr = &a;

    printf("the address of a is:%u\n",&a);
    printf("the address of a is:%u\n",ptr);

    ptr++;
    //it increase value of address according to bytes for example
    // as you know that int store in 4 byte so if you increase that int address
    // it will increase by 4 for exampld if address is 666678 then after 
    // increment it will become 666682 increase by 4
printf("the address of a is:%u\n",ptr);

    return 0;
}