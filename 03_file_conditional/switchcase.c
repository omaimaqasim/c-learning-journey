#include<stdio.h>

int main(){
    /*remember that we use switch case if we want to compare one value to multiple values
      • Ternary operator: Use when choosing between two simple values in a short expression.
• If-else: Use when handling complex conditions or multi-step logic.
• Switch case: Use when matching one variable against multiple fixed values for cleaner code.*/  
//   example of switch case

int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Weekend or Invalid day\n");
    }

    // default is optional its your choice to write or no
    // we use break so that compiler no go to anothr case if first one
    // true its mean if true then compiler get out from switch

    return 0;
}


