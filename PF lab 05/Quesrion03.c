#include <stdio.h>

int main() {
    char fit;
    int age, score;

    printf("Do you have medical clearance? (y/n): ");
    scanf(" %c", &fit);

    if (fit == 'n' || fit == 'N') {
        printf("Rejected (Not medically fit)\n");
    }
    else {
        printf("Enter age: ");
        scanf("%d", &age);

        if (age >= 18 && age <= 35) {
            printf("Enter performance score (0-100): ");
            scanf("%d", &score);

            if (score > 80)
                printf("Player Selected\n");
            else
                printf("Not Eligible (Low performance)\n");
        }
        else {
            printf("Not Eligible (Age not in range)\n");
        }
    }

    return 0;
}

