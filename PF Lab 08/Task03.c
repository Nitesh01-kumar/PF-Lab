#include <stdio.h>

int main() {
    int n;
    int i, j;
    printf("Enter the table limit (N): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}

