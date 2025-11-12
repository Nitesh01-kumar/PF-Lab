#include <stdio.h>

int main() {
    int ratings[5];
    int i, sum = 0;
    float average;

    printf("Enter ratings (1-10) for 5 products:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &ratings[i]);
    }

    for(i = 0; i < 5; i++) {
        sum += ratings[i];
    }

    average = sum / 5.0;
    printf("\nAverage Rating: %.2f\n", average);
    printf("Needs Improvement:\n");

    for(i = 0; i < 5; i++) {
        if(ratings[i] < 5) {
            printf("Product %d: %d\n", i + 1, ratings[i]);
        }
    }

    return 0;
}

