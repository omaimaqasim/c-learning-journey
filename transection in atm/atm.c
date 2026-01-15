#include <stdio.h>
#include <string.h>

#define USERS 3
#define TXN 5

// Function Declarations
int login(int acc[], int pin[]);
void showMenu();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
void changePin(int index, int pin[]);
void miniStatement(float statement[], int count);
void transferMoney(float balance[], int sender);

// Main Function
int main() {
    int account[USERS] = {1111, 2222, 3333};
    int pin[USERS] = {1234, 2345, 3456};
    float balance[USERS] = {5000, 6000, 7000};

    float statement[TXN];
    int txnCount = 0;

    int choice;
    int userIndex = login(account, pin);

    if (userIndex == -1) {
        printf("\nAccount locked. Try later.\n");
        return 0;
    }

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance[userIndex]);
                break;

            case 2:
                balance[userIndex] = withdraw(balance[userIndex]);
                statement[txnCount++] = -1; // withdrawal
                break;

            case 3:
                balance[userIndex] = deposit(balance[userIndex]);
                statement[txnCount++] = 1; // deposit
                break;

            case 4:
                changePin(userIndex, pin);
                break;

            case 5:
                miniStatement(statement, txnCount);
                break;

            case 6:
                transferMoney(balance, userIndex);
                break;

            case 7:
                printf("\nThank you for using ATM System!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}

int login(int acc[], int pin[]) {
    int accNo, enteredPin, attempts = 0;

    while (attempts < 3) {
        printf("\nEnter Account Number: ");
        scanf("%d", &accNo);
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        for (int i = 0; i < USERS; i++) {
            if (accNo == acc[i] && enteredPin == pin[i]) {
                printf("\nLogin Successful!\n");
                return i;
            }
        }

        attempts++;
        printf("Invalid credentials! Attempts left: %d\n", 3 - attempts);
    }
    return -1;
}

void showMenu() {
    printf("\n====== ATM MENU ======\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Cash\n");
    printf("3. Deposit Cash\n");
    printf("4. Change PIN\n");
    printf("5. Mini Statement\n");
    printf("6. Transfer Money\n");
    printf("7. Exit\n");
    printf("Enter choice: ");
}

void checkBalance(float balance) {
    printf("\nCurrent Balance: Rs %.2f\n", balance);
}

float withdraw(float balance) {
    float amt;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amt);

    if (amt > 0 && amt <= balance) {
        balance -= amt;
        printf("Withdrawal Successful!\n");
    } else {
        printf("Insufficient balance!\n");
    }
    return balance;
}

float deposit(float balance) {
    float amt;
    printf("Enter deposit amount: ");
    scanf("%f", &amt);

    if (amt > 0) {
        balance += amt;
        printf("Deposit Successful!\n");
    } else {
        printf("Invalid amount!\n");
    }
    return balance;
}

void changePin(int index, int pin[]) {
    int newPin;
    printf("Enter new PIN: ");
    scanf("%d", &newPin);
    pin[index] = newPin;
    printf("PIN changed successfully!\n");
}

void miniStatement(float statement[], int count) {
    printf("\nMini Statement:\n");
    for (int i = 0; i < count && i < TXN; i++) {
        if (statement[i] == 1)
            printf("Deposit Transaction\n");
        else
            printf("Withdrawal Transaction\n");
    }
}

void transferMoney(float balance[], int sender) {
    int receiver;
    float amt;

    printf("Enter receiver account index (0-2): ");
    scanf("%d", &receiver);

    printf("Enter amount to transfer: ");
    scanf("%f", &amt);

    if (receiver >= 0 && receiver < USERS && amt <= balance[sender]) {
        balance[sender] -= amt;
        balance[receiver] += amt;
        printf("Transfer Successful!\n");
    } else {
        printf("Transfer Failed!\n");
    }
}