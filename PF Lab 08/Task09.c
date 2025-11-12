#include <stdio.h>

int main() {
	int w, p, t;
    float temp[2][3][3]; // 2 wards, 3 patients, 3 times (M, A, E)

    for (w = 0; w < 2; w++) {
        printf("Ward %d:\n", w + 1);
        for (p = 0; p < 3; p++) {
            printf("Patient %d (morning, afternoon, evening): ", p + 1);
            for (t = 0; t < 3; t++)
                scanf("%f", &temp[w][p][t]);
        }
    }

    for (w = 0; w < 2; w++) {
        float sum = 0;
        int count = 0;
        for (p = 0; p < 3; p++)
            for (t = 0; t < 3; t++) {
                sum += temp[w][p][t];
                count++;
            }
        printf("Average temperature in Ward %d = %.2f°C\n", w + 1, sum / count);
    }
    return 0;
}

