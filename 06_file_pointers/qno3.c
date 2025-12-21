#include <stdio.h>
// three qs ar remaining to practice
// Write a program to change the value of a variable to ten times of its current
// value.

int change_to_10_times(int* );

int change_to_10_times(int* v ){
 
    *v *= 10;
    return *v;


}
int main (){
    int value = 6;
    

    printf("the value ten times is : %d",change_to_10_times(&value));


return 0;
}