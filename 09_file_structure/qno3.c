#include <stdio.h>
// write a program to illustrate the use of arrow operator -> in c 

struct student {
 char name[20];
 int age ;
 char grade;
};
int main (){
    
    struct student s1 = {"hunza",17,'A'};
     struct student* ptr = &s1;

     printf("student information : \n %s \n %d \n %c",ptr->name,ptr->age,ptr->grade);
     

return 0;
}