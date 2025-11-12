#include <stdio.h>
#include <math.h>

int main() {
    char mode, op;
    double a, b;

    printf("Mode (b=Basic, a=Advanced): ");
    scanf(" %c", &mode);

    if (mode == 'b') {
        printf("Operation (s=Square root, p=Power, l=Log): ");
        scanf(" %c", &op);

        if (op == 's') {
            printf("Enter number: ");
            scanf("%lf", &a);
            printf("Result = %.2lf\n", sqrt(a));
        }
        else if (op == 'p') {
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", pow(a, b));
        }
        else if (op == 'l') {
            printf("Enter number: ");
            scanf("%lf", &a);
            printf("Result = %.2lf\n", log(a));
        }
        else {
            printf("Invalid operation\n");
        }
    }
    else {
        printf("Operation (s=Sine, c=Cosine, t=Tangent): ");
        scanf(" %c", &op);

        printf("Enter angle in radians: ");
        scanf("%lf", &a);

        if (op == 's') printf("Result = %.2lf\n", sin(a));
        else if (op == 'c') printf("Result = %.2lf\n", cos(a));
        else if (op == 't') printf("Result = %.2lf\n", tan(a));
        else printf("Invalid operation\n");
    }

    return 0;
}

