#include <stdio.h>

int main() {
    int teamA = 0, teamB = 0, choice;

    printf("Welcome to the Soccer Simulation Game!\n");
    printf("Input 1 for Team A goal, 2 for Team B goal, and 0 to end the game.\n");

    while (1) {
        printf("\nEnter your choice (0 to end): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        } else if (choice == 1) {
            teamA++;
            printf("Team A scores! Current Score: Team A %d - Team B %d\n", teamA, teamB);
        } else if (choice == 2) {
            teamB++;
            printf("Team B scores! Current Score: Team A %d - Team B %d\n", teamA, teamB);
        } else {
            printf("Invalid input. Please enter 0, 1, or 2.\n");
        }
    }

    printf("\nGame Over!\n");
    printf("Final Score:\n");
    printf("Team A: %d\n", teamA);
    printf("Team B: %d\n", teamB);

    if (teamA > teamB) {
        printf("Winner: Team A\n");
    } else if (teamB > teamA) {
        printf("Winner: Team B\n");
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}


