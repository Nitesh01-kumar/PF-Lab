#include <stdio.h>

int main() {
    int availability, shift;
    int totalHours = 0;
    int day = 1;

    while (day <= 7) {
        printf("\nDay %d\n", day);
        printf("Availability (1=Yes, 0=No): ");
        scanf("%d", &availability);

        printf("Shift hours: ");
        scanf("%d", &shift);

        totalHours += shift;

        if (shift > 8) {
            printf("Conflict: More than 8 hours\n");
        }
        if (shift > 0 && availability == 0) {
            printf("Conflict: Assigned when not available\n");
        }

        day++;
    }

    if (totalHours > 40) {
        printf("\nConflict: Weekly hours exceed 40 (Total = %d)\n", totalHours);
    }

    printf("\n--- Weekly Summary ---\n");
    printf("Total Hours = %d\n", totalHours);

    return 0;
}

