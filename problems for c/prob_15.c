
#include <stdio.h>
void check_cardNo(int saved_no, int attempts_left);
void check_cardNo(int saved_no, int attempts_left)
{
    int card_no;

    if (attempts_left == 0)
    {
        printf("Card blocked due to multiple incorrect attempts!");
    }
    else
    {
        printf("please enter your ATM card number:");
        scanf("%d", &card_no);

        if (card_no != saved_no)
        {
            check_cardNo(saved_no, attempts_left - 1);
        }
        else
        {
            printf("Card verified. You can proceed with transactions!");
        }
    }
}

int main()
{
    int saved_no = 1234, attempts_left = 3;

    check_cardNo(saved_no, attempts_left);

    return 0;
}


/*  qno 15:
•	Prompt the user to enter their ATM card number.
•	Allow up to 3 attempts to enter the correct card number using recursion.
•	If correct, display: "Card verified. You can proceed with transactions!"
•	If all attempts fail, display: "Card blocked due to multiple incorrect attempts!"
*/