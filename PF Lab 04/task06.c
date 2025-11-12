#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Enter course of Student 1 (C=CS, M=Math, P=Physics): ");
    scanf(" %c", &c1);

    printf("Enter course of Student 2 (C=CS, M=Math, P=Physics): ");
    scanf(" %c", &c2);

    printf("Enter course of Student 3 (C=CS, M=Math, P=Physics): ");
    scanf(" %c", &c3);

    printf("\nSeating Arrangement:\n");

    printf("Student 1: %c\n", c1);

    if (c2 == c1) {
        printf("? Warning: Student 2 has the same course (%c) as Student 1\n", c2);
    }
    printf("Student 2: %c\n", c2);

    if (c3 == c2) {
        printf("? Warning: Student 3 has the same course (%c) as Student 2\n", c3);
    }
    printf("Student 3: %c\n", c3);

    return 0;
}

