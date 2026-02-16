#include <stdio.h>
/*
Read n elements into an array
Find:
sum of elements
largest element
count of even and odd numbers*/

int sum (int arr[], int size);
int sum (int arr[], int size){

    int sum = 0,i;
    for ( i = 0; i < size; i++)
    {
        // arr[i]  ≡  *(arr + i) this already convert to value
         sum += arr[i];
    }

    return sum;
    
}

int largest (int arr[], int size);
int largest (int arr[], int size){

    int largest = arr[0],i;

    for ( i = 1; i < size; i++)
    {
         if (largest<arr[i])
         {
            largest = arr[i];
         }
         
    }

    return largest;
    

}

void even_odd (int arr[], int size);
void even_odd (int arr[], int size){

    int countEven=0,countOdd=0,i;

    for ( i = 0; i < size; i++)
    {
    
        if (arr[i]%2 ==0)
        {
            countEven++;
        }
        else{
            countOdd++;
        }
        
    }

    printf("total odd is %d and total even is %d\n",countOdd,countEven);
    
}

int main (){
    
    int arr[5] = {1,2,3,4,5};

printf("%d\n",sum(arr,5));
printf(" largest :%d\n",largest(arr,5));

even_odd(arr,5);

return 0;
}