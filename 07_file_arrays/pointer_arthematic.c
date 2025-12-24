#include <stdio.h>

int main()
{
    int a = 22;
    int *ptr = &a;
    int arr[5] = {10, 20, 30, 40, 50};

    int *p1 = &arr[0];
    int *p2 = &arr[3];

    printf("the address of a is:%u\n", &a);
    printf("the address of a is:%u\n", ptr);

    ptr++;
    // it increase value of address according to bytes for example
    //  as you know that int store in 4 byte so if you increase that int address
    //  it will increase by 4 for exampld if address is 666678 then after
    //  increment it will become 666682 increase by 4

    // means wo increase ya dcrease hoga jitna byte le raha hoga
    printf("the address of a is:%u\n", ptr);

    /* 1. Addition of a number to a pointer */
    printf("p1:%u and p2:%u\n", p1, p2);
    printf("Initial p1 points to value: %d\n", *p1);
    p1 = p1 + 2; // moves 2 elements forward
    printf("After p1 + 2, p1 points to value: %d\n\n", *p1);

    /* 2. Subtraction of a number from a pointer */
    p1 = p1 - 1; // moves 1 element backward
    printf("After p1 - 1, p1 points to value: %d\n\n", *p1);

    /* 3. Subtraction of one pointer from another */
    int diff = p2 - p1;
    printf("Pointer difference (p2 - p1): %d elements\n\n", diff);

    /* 4. Comparison of two pointer variables */
    if (p1 < p2)
        printf("p1 points to an earlier location than p2\n");
    else
        printf("p1 points to a later location than p2\n");

    return 0;
}

/*
FINAL SHORT SUMMARY (EXAM PERFECT)

Pointer + number → moves forward

Pointer - number → moves backward

Pointer - pointer → number of elements between them

Pointer comparison → compares memory locations


What does “pointer − pointer” mean?

👉 It tells you how many elements are between two pointers
👉 NOT bytes
👉 Only works if both pointers point to the same array*/