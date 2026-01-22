#include <stdio.h>

int main() {

    int distances_for_7days[7], i;
    int total_distance = 0;
    int shortest_dis, short_disday;

    printf("Enter distances for 7 days:\n");

    for(i = 0; i < 7; i++) {
        scanf("%d", &distances_for_7days[i]);
        total_distance += distances_for_7days[i];
    }

    // initialize shortest distance
    shortest_dis = distances_for_7days[0];
    short_disday = 1;

    // find shortest distance
    for(i = 1; i < 7; i++) {
        if(distances_for_7days[i] < shortest_dis) {
            shortest_dis = distances_for_7days[i];
            short_disday = i + 1;
        }
    }

    printf("Total distance: %d km\n", total_distance);
    printf("Shortest distance is %d km on day %d\n", shortest_dis, short_disday);

    return 0;
}
