#include <stdio.h>

int main() {
	int i;
    float temp[7][2];
    printf("Enter morning and evening temperatures for 7 days:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f %f", &temp[i][0], &temp[i][1]);
    }

    for (i = 0; i < 7; i++) {
        float avg = (temp[i][0] + temp[i][1]) / 2;
        printf("Average temperature on Day %d = %.2f°C\n", i + 1, avg);
    }
    return 0;
}

