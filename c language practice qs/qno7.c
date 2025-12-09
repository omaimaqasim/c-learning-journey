#include <stdio.h>

int main() {
    int planChoice, addonChoice;
    int total = 0;

    printf("----- Membership Plans -----\n");
    printf("1. Basic    - $20\n");
    printf("2. Standard - $35\n");
    printf("3. Premium  - $50\n");
    printf("Enter your plan choice (1-3): ");
    scanf("%d", &planChoice);

    if (planChoice == 1)
        total += 20;
    else if (planChoice == 2)
        total += 35;
    else if (planChoice == 3)
        total += 50;
    else {
        printf("Invalid plan choice!\n");
      
    }

    printf("\nAdd-ons Available:\n");
    printf("1. Personal Trainer - $15\n");
    printf("2. Diet Plan        - $10\n");
    printf("3. No Add-ons\n");
    printf("Enter your add-on choice (1-3): ");
    scanf("%d", &addonChoice);

    if (addonChoice == 1)
        total += 15;
    else if (addonChoice == 2)
        total += 10;
    else if (addonChoice == 3)
        total += 0;
    else {
        printf("Invalid add-on choice!\n");
        
    }

    printf("\nTotal Membership Cost = $%d\n", total);

    return 0;
}
