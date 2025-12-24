#include <stdio.h>

void Print_array(int *,int s);
void Print_array(int *a,int s){

    int i;
    for ( i = 0; i < s; i++)
    {
        printf("%d,",*a);
        a++;
    }
    

}
int main (){

 int marks[] = {22,44,55,66};  
  
//  if we want to parse an array in function you will use pointer
// for example:
 Print_array(marks,4);

    
return 0;
}