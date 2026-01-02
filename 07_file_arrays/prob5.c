#include <stdio.h>
/*
6. Write a program containing functions which counts the number of positive
integers in an array.
*/
int count_positive(int arr[],int size);
int count_positive(int arr[],int size){
    int count=0,i;
    for ( i = 0; i <size ; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
        
    }
    return count;
    
}
int main (){
    int arr[] = {1,-2,3,0,-3};

    printf("total positive numbers is %d",count_positive(arr,5));
return 0;
}