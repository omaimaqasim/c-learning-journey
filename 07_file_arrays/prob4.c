#include <stdio.h>
// 5. Write a program containing a function which reverses the array passed to it

void reverse_arr(int arr[], int size);
void reverse_arr(int arr[], int size)
{
    int i, store;
    for (i = 0; i < size/2; i++)
    {

           
            store = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = store;

      
    }
}

int main()
{
    int i;
    int arr[4] = {2, 3, 4, 5};
    reverse_arr(arr, 4);

      // Print reversed array
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}