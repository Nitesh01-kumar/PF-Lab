#include <stdio.h>

int main() {
    int screens = 2, days, shows;
    int s, d, sh;
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("Enter number of shows per day: ");
    scanf("%d", &shows);

    float revenue[screens][days][shows];

    for (s = 0; s < screens; s++) {
        printf("Enter ticket revenue for Screen %d:\n", s + 1);
        for (d = 0; d < days; d++) {
            for (sh = 0; sh < shows; sh++) {
                printf("Day %d Show %d: ", d + 1, sh + 1);
                scanf("%f", &revenue[s][d][sh]);
            }
        }
    }

    for (s = 0; s < screens; s++) {
        float total = 0;
        int count = 0;
        for (d = 0; d < days; d++)
            for (sh = 0; sh < shows; sh++) {
                total += revenue[s][d][sh];
                count++;
            }
        printf("\nScreen %d - Total Revenue: %.2f, Average: %.2f\n", s + 1, total, total / count);
    }
    return 0;
}

