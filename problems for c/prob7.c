// Create a function that takes a variable number of arguments, each argument representing the number of items in a group. The function should return the number of permutations (combinations) of choices you would have if you selected one item from each group
#include <stdio.h>
int combination(int arr[] , int size);
int combination(int arr[] , int size){
     int i,combinations=1;

     for ( i = 0; i < size ; i++)
     {
         combinations*=arr[i];
     }

     return combinations;
     

}
int main (){
    int items[] = {3,4,5};
   
    printf("%d\n",combination(items,3));
    
return 0;
}