#include <stdio.h>
// 👉 You must declare (define) the structure type before using it in a function declaration or definition.
struct employee
{
    int code;
    float salary;
    char name[10];
};  

void  showStructure(struct employee e );

void  showStructure(struct employee e ){
    printf("%d %.2f %s\n", e.code , e.salary , e.name);
    
}


int main (){
    
    struct employee e1 = {123,22.2,"hunza"};

    showStructure(e1);
return 0;
}