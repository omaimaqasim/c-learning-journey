#include <stdio.h>


int findLSD(int num) {
    return num % 10;
}


int findMSD(int num) {
    return num / 100;
}

int main() {
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    printf("Least Significant Digit: %d\n", findLSD(num));
    printf("Most Significant Digit: %d\n", findMSD(num));

    return 0;
}
