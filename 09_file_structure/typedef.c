#include <stdio.h>
// as you know that we have to write full struct employee variable name for structure 
// declaring but we can make our data type like this using typedef
 typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;
int main (){

    // typedef struct employee emp both same
    emp e1 = {1,12.2,"hunza"};
    
return 0;
}