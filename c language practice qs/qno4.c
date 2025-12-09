#include <stdio.h>
#include <string.h>


int main()
{
    int play_no, seat_cat, no_tickets, base_p, seat_catp, total_cost;

    char seat[20], play_selected[20];

    printf("o Romeo and Juliet – 500 PKR\n");
    printf("o Hamlet – 600 PKR\n");
    printf("o Macbeth – 550 PKR\n");

    printf("select play from 1 to 3\n");
    scanf("%d", &play_no);

    printf("o Balcony – +0 PKR\n");
    printf("o Regular – +100 PKR\n");
    printf("o VIP – +250 PKR\n");

    printf("select seat categories from 1 to 3\n");
    scanf("%d", &seat_cat);

    printf("enter number of tickets you want to purchase\n");
    scanf("%d", &no_tickets);

    // checking if neg
    if (no_tickets < 0)
    {
        printf("enter correct number of tickets\n");
    }

    // base price

    if (play_no == 1)
    {
        base_p = 500;
        strcpy(play_selected,"Romeo and Juliet");
    }
    else if (play_no == 2)
    {
        base_p = 600;
        strcpy(play_selected,"Hamlet");
    }

    else if (play_no == 3)
    {
        base_p = 550;
        strcpy(play_selected,"Macbeth");
    }

    // seat cat
    if (seat_cat == 1)
    {
        seat_catp = 0;
        strcpy(seat, "balcony");
    }

    else if (seat_cat == 2)
    {
        seat_catp = 100;
        strcpy(seat, "regular");
    }

    else if (seat_cat == 3)
    {
        seat_catp = 250;
        strcpy(seat, "VIP");
    }

    total_cost = base_p + (seat_catp * no_tickets);

    printf("Play selected:%s\n",play_selected);
    printf("Seat category:%s\n",seat);
    printf("Number of tickets:%d\n", no_tickets);
    printf("Total bill in PKR:%d PKR\n", total_cost);

    return 0;
}