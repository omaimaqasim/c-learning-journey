#include <stdio.h>

// 1. Call by reference example: using pointers to change variable values using a function
// Function declaration (prototype)
// Here, we are declaring a function 'sum' that takes pointers to two integers and returns an integer
int sum(int*, int*);  

// Function definition
// 'a' and 'b' are pointers to integers. We can modify the original variables using these pointers.
int sum(int* a, int* b) {
    *a = 22;           // Step 1: Change the value of the variable pointed to by 'a' (x in main) to 22
    return *a + *b;    // Step 2: Return the sum of the values pointed to by 'a' and 'b' (*a + *b)
}

int main() {
    int x = 2, y = 3;  // Step 3: Declare and initialize two integer variables

    // Step 4: Call the function 'sum' by passing the addresses of x and y
    // &x gives the memory address of x, &y gives the memory address of y
    // The function can now modify x directly using the pointer 'a'
    printf("sum : %d", sum(&x, &y));  // Step 5: Print the returned sum

    // Optional: If we print x now, we will see that it has been changed by the function
    printf("\nx after function call: %d\n", x);  

    return 0;
}
