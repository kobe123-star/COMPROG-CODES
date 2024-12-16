#include <stdio.h>

int main() {
    int destination, time, duration, minutes, total_cost;

    printf("Enter destination code (1-4): ");
    scanf("%d", &destination);

    printf("Enter time code (1 for daytime, 2 for nighttime): ");
    scanf("%d", &time);

    printf("Enter duration of the call in minutes: ");
    scanf("%d", &duration);

   
    switch (destination) {
        case 1:
            minutes = duration / 3 + (duration % 3 > 0 ? 1 : 0);
            total_cost = (time == 1 ? 50 : 45) * minutes;
            break;
        case 2:
            minutes = duration / 2 + (duration % 2 > 0 ? 1 : 0);
            total_cost = (time == 1 ? 38 : 27) * minutes;
            break;
        case 3:
            minutes = duration / 3 + (duration % 3 > 0 ? 1 : 0);
            total_cost = (time == 1 ? 48 : 36) * minutes;
            break;
        case 4:
            minutes = duration / 2 + (duration % 2 > 0 ? 1 : 0);
            total_cost = (time == 1 ? 35 : 30) * minutes;
            break;
        default:
            printf("Invalid destination code.\n");
            return 1;
    }

    printf("Total charges: P%d\n", total_cost);

    return 0;
}

