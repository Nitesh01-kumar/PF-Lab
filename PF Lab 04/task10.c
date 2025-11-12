#include <stdio.h>

int main() {
    int vehicles, emergency;
    printf("Enter number of vehicles: ");
    scanf("%d", &vehicles);
    printf("Is there an emergency vehicle? (1 = Yes, 0 = No): ");
    scanf("%d", &emergency);

    if (emergency == 1) {
        printf("Emergency detected! Green light ON immediately.\n");
    } 
    else {
        if (vehicles < 10)
            printf("Green light for 15 seconds.\n");
        else if (vehicles <= 30)
            printf("Green light for 30 seconds.\n");
        else
            printf("Green light for 60 seconds.\n");
    }

    return 0;
}

