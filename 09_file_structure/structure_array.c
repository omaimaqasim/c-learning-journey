/*
we can make an array of structure like below*/

#include <stdio.h>

struct employee {
    char name[20];
    int code;
    float salary;
};

int main (){
    
    struct employee Employees[20];
    Employees[0].code = 1234;
    Employees[2].code = 3333;

    printf(" %d %d\n",Employees[0].code,Employees[2].code);
    
    
return 0;
}