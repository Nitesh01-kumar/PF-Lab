#include <stdio.h>

int main() {
    float weight[6];
    int i, count = 0;

    printf("Enter luggage weights of 6 passengers:\n");
    for(i = 0; i < 6; i++) {
        scanf("%f", &weight[i]);
    }

    printf("\nLuggage Report:\n");
    for(i = 0; i < 6; i++) {
        printf("Bag %d: %.2f kg", i + 1, weight[i]);
        if(weight[i] > 25) {
            printf(" Overweight");
            count++;
        }
        printf("\n");
    }

    printf("\nTotal Overweight Bags: %d\n", count);

    return 0;
}

