#include <stdio.h>

int main() {
    char loan;
    int salary, credit;

    printf("Loan type (h=Home, c=Car, o=Other): ");
    scanf(" %c", &loan);

    (loan == 'h') ?
        (printf("Enter salary: "), scanf("%d", &salary),
         printf("Interest = %d%%\n", (salary > 100000 ? 8 : 10)))
    : (loan == 'c') ?
        (printf("Enter credit score: "), scanf("%d", &credit),
         printf("Interest = %d%%\n", (credit > 700 ? 9 : 12)))
    : printf("Interest = 15%%\n");

    return 0;
}

