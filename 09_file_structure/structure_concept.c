// we use structure to store dissimilar data type 
// as you know that array only store similar data type

// structure  is always declare outside the main fn so that we can use that
// special variable on diff fn basically it give permission to everyfn to use that special
// special variable we called struct
#include <stdio.h>
#include <string.h>

struct employee{
   int code ;
   float salary;
   char name[10];
};


int main (){
    struct employee e1;
    strcpy(e1.name, "zeyd");
    e1.code = 1234;
    e1.salary = 12.22;

    printf("%s %d %.2f\n",e1.name,e1.code,e1.salary);
    


return 0;
}