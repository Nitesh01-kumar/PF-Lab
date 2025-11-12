#include <stdio.h>

int main() {
    int switches;
    printf("Enter number of tab switches (0-3): ");
    scanf("%d", &switches);

    switch(switches) {
        case 0:
            printf("Exam Completed Successfully.\n");
            break;
        case 1:
            printf("Warning: You switched once.\n");
            break;
        case 2:
            printf("Warning: You switched twice.\n");
            break;
        case 3:
            printf("Exam Terminated!\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}

