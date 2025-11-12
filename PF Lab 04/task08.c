#include <stdio.h>

int main() {
    int day, corruption;

    printf("Enter the day (1 to 7): ");
    scanf("%d", &day);

    printf("Is there corruption today? (1 = Yes, 0 = No): ");
    scanf("%d", &corruption);

    switch(day) {
        case 1:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Full backup (weekly).\n", day);
            break;
        case 2:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Incremental backup.\n", day);
            break;
        case 3:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Incremental backup.\n", day);
            break;
        case 4:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Incremental backup.\n", day);
            break;
        case 5:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Incremental backup.\n", day);
            break;
        case 6:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Incremental backup.\n", day);
            break;
        case 7:
            if (corruption == 1)
                printf("Day %d: Full backup triggered due to corruption.\n", day);
            else
                printf("Day %d: Full backup (weekly).\n", day);
            break;
        default:
            printf("Invalid day! Please enter between 1 and 7.\n");
    }

    return 0;
}

