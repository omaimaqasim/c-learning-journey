#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    e1.code = 77;
    ptr = &e1;

    printf("%p\n",ptr);
    // it will give the address of variable code in e1
    printf("%p\n",&e1.code);

    // both are same it will give the value of variable code inside the struct variable e1
    printf("%d\n", (*ptr).code);
    // this arrow automatically convert ptr address variable to actual variable e1
    printf("%d\n", ptr->code);
    
    
    


    return 0;
}