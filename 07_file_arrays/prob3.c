#include <stdio.h>
//     3. Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.

// In C, you must specify the array size (unless you initialize it immediately).
int main (){
    int arr[10],i,no;

    printf("enter a number: \n");
    scanf("%d", &no);
    
    for ( i = 0; i <10; i++)
    {
         
            arr[i] = (i+1)*no;
       
        
         printf("%d\n",arr[i]);
    }
    
return 0;
}