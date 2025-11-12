#include <stdio.h>

int main() {
    int rows, seats;
    int i;
    int j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of seats per row: ");
    scanf("%d", &seats);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= seats; j++) {
            printf("Row %d Seat %d\n", i, j);
        }
    }
    return 0;
}

