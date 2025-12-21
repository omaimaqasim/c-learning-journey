    #include <stdio.h>

    // for money deposit
    void deposit(int *balance, int amount);

    void deposit(int *balance, int amount)
    {

        printf("==============================\n");
        printf("\t \t ATM DEPOSIT\n");
        printf("==============================\n\n");

        printf("Current Balance : %d\n", *balance);
        printf("Enter amount to deposit : ");
        scanf("%d", &amount);

        *balance += amount;

        printf("---------------------------\n");
        printf(" Deposit Successful ✔\n");
        printf("---------------------------\n\n");

        printf("Amount Deposited :%d\n", amount);
        printf("Updated Balance  :%d\n", *balance);

        printf("Thank you for using ATM.\n");
        printf("==============================\n");
    }

    // for money withdraw
    void withdraw(int *balance, int amount);

    void withdraw(int *balance, int amount)
    {

        printf("==============================\n");
        printf("\t \t ATM WITHDRAW\n");
        printf("==============================\n\n");

        printf("Current Balance : %d\n", *balance);
        printf("Enter amount to withdraw : ");
        scanf("%d", &amount);

        // condition for checking if amount greater than balance or not

        if (amount <= *balance)
        {
            *balance -= amount;

            printf("---------------------------\n");
            printf(" Withdrawal Successful ✔\n");
            printf("---------------------------\n\n");

            printf("Amount Withdrawn :%d\n", amount);
            printf("Remaining Balance:%d\n\n", *balance);

            printf("Please collect your cash.\n");
            printf("Thank you for using ATM.\n");
            printf("==============================\n");
        }
        else{
            // continue soon
              printf("---------------------------\n");
            printf("  Transaction Failed ✖\n");
            printf("---------------------------\n\n");

            printf("Reason : Insufficient Balance\n");
            printf("Available Balance :%d\n\n", *balance);

            printf("Please try a smaller amount.\n");
            printf("==============================\n");
        }
    }
    int main()
    {
        int balance = 10000, amount;

        deposit(&balance, amount);
        withdraw(&balance, amount);

        return 0;
    }