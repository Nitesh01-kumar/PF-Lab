#include <stdio.h>

int main() {
    int temp;
    char snowfall, humidity;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("Is there snowfall? (y/n): ");
        scanf(" %c", &snowfall);

        if (snowfall == 'y' || snowfall == 'Y') {
            printf("Snowstorm Alert\n");
        } else {
            printf("Frost Warning\n");
        }
    }
    else if (temp > 35) {
        printf("Is humidity high? (y/n): ");
        scanf(" %c", &humidity);

        if (humidity == 'y' || humidity == 'Y') {
            printf("Heatwave with High Humidity Alert\n");
        } else {
            printf("Dry Heatwave Alert\n");
        }
    }
    else {
        printf("Normal Weather\n");
    }

    return 0;
}

