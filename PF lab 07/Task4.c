#include <stdio.h>

int main() {
    int attendance[7];
    int i, totalPresent = 0;

    printf("Enter attendance for 7 days (1 for present, 0 for absent):\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }

    for(i = 0; i < 7; i++) {
        if(attendance[i] == 1) {
            totalPresent++;
        }
    }

    printf("\nTotal Present Days: %d\n", totalPresent);

    if(totalPresent >= 6) {
        printf("Attendance Summary: Excellent Attendance\n");
    } 
    else if(totalPresent >= 4) {
        printf("Attendance Summary: Average Attendance\n");
    } 
    else {
        printf("Attendance Summary: Needs Improvement\n");
    }

    return 0;
}

