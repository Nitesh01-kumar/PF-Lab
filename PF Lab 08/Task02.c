#include <stdio.h>

int main() {
    int n;
    int i, j, s;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (s = n - i; s > 0; s--)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

