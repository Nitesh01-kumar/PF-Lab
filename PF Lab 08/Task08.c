#include <stdio.h>

int main() {
    int product = 2, branch, week;
    int p, b, w;
    printf("Enter number of branches: ");
    scanf("%d", &branch);
    printf("Enter number of weeks: ");
    scanf("%d", &week);

    int sales[product][branch][week];
    for (p = 0; p < product; p++) {
        printf("Enter sales for Product %d:\n", p + 1);
        for (b = 0; b < branch; b++) {
            for (w = 0; w < week; w++) {
                printf("Branch %d Week %d: ", b + 1, w + 1);
                scanf("%d", &sales[p][b][w]);
            }
        }
    }

    for (p = 0; p < product; p++) {
        int total = 0;
        for (b = 0; b < branch; b++)
            for (w = 0; w < week; w++)
                total += sales[p][b][w];
        printf("Total sales of Product %d = %d\n", p + 1, total);
    }
    return 0;
}

