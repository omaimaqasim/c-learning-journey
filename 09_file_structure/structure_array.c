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

    // you can also assign structure variable like this
    struct employee zeyd = { "zeydKhan",12,123.33};
    //why in this case it allow name to assign like this because we are assigning name
    // at the time of initializing name[20] = "zeydkhan" it is allow but .name = "zeydkhan" 
    // is not allow

    printf("%s %d %.2f\n",zeyd.name,zeyd.code,zeyd.salary);
    
    
    
return 0;
}