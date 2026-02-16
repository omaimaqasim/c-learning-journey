#include <stdio.h>

void  findmax_shifting (int arr[], int size);
void  findmax_shifting (int arr[], int size){


    int i,max=arr[0],temp,j;

    for ( i = 0; i < size-1; i++)
    {
        
        // shifting
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
    }
    for ( j = 1; j < size; j++)
    {
       
        if (max<arr[j])
        {
            max=arr[j];
        }
    }
    printf("max = %d  \n",max);

//printing arr
        for ( j = 0; j < size; j++)
    {
       
        printf(" %d ",arr[j]);
        
    }
    
    
    
    
}


int main (){
    int data[4] = {1,2,3,4};

    findmax_shifting(data,4);
return 0;
}

/*
Write a C function named findMaximum that accepts the following arguments:

An integer array data[]

An integer n representing the total number of elements

The function should use a loop to traverse the array and return the largest value stored in it.

You are also required to rotate the elements of an array to the left by one position without using an additional array.

Task:
Write a code snippet (only loop logic) that:

Stores the first element temporarily

Shifts all remaining elements one index to the left

Places the first element at the last index
*/