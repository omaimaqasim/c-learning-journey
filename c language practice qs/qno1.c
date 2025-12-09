#include <stdio.h>

int main()
{
    int no_of_tickets, total_cost, route_no;

    printf("1.Route 1 – Departure Time: 830 (represents 8:30 AM) – Fare: 15\n");
    printf("2.Route 2 – Departure Time: 1315 (represents 1:15 PM) – Fare: 22\n");
    printf("3.Route 3 – Departure Time: 1845 (represents 6:45 PM) – Fare: 35\n");

    printf("Enter route number from 1-3: \n");
    scanf("%d", &route_no);

    printf("Enter the number of tickets: \n");
    scanf("%d", &no_of_tickets);

    //   for calculating total cost
    if (route_no == 1)
    {
        total_cost = 15 * no_of_tickets;
        printf("route no :1\n");
        printf(" department time :830\n");
        printf("fare per ticket :15\n");
        printf("number of tickets :%d\n", no_of_tickets);
        printf("total cost :%d\n", total_cost);
    }
    else if (route_no == 2)
    {
        total_cost = 22 * no_of_tickets;
        printf("route no :2\n");
        printf(" department time :1351\n");
        printf("fare per ticket :22\n");
        printf("number of tickets :%d\n", no_of_tickets);
        printf("total cost :%d\n", total_cost);
    }
    else if (route_no == 3)
    {
        total_cost = 35 * no_of_tickets;
        printf("route no :3\n");
        printf(" department time :830\n");
        printf("fare per ticket :1845\n");
        printf("number of tickets :%d\n", no_of_tickets);
        printf("total cost :%d\n", total_cost);
    }
    else
    {
        printf("enter correct route");
    }

    return 0;
}