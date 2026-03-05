// 2. Find the Second Largest Number in an Array
// Write a program that finds the second largest element in an array.

// Example:
// Array: 10 5 8 20 15
// Output: Second largest = 15

#include <stdio.h>
#include <string.h>

int second_largest(int arr[], int size);
int second_largest(int arr[], int size){
    int i=0,sec_large = arr[i];

    for ( i = 1; i < size; i++)
    {
        if (sec_large<arr[i])
        {
            sec_large = arr[i];
        }
        
    }

    return sec_large;
    
}
int main (){
    int arr[] = {10, 5 ,8 ,20 ,15};

    printf("%d\n",second_largest(arr,strlen(arr)));
    
  
return 0;
}