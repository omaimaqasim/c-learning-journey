#include <stdio.h>

void ascending(int arr[], int size) {
    int pass, i, temp;

    for (pass = 0; pass < size - 1; pass++) {
        
        for (i = 0; i < size - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        // display after each pass
        printf("After pass %d: ", pass + 1);
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int arr[5] = {4, 2, 3, 6, 5};
    ascending(arr, 5);
    return 0;
}
