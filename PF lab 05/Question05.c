#include <stdio.h>

int main() {
    char exam, grade;

    printf("Enter exam type (m=Midterm, f=Final): ");
    scanf(" %c", &exam);

    switch (exam) {
    case 'm':
        printf("Enter grade (A, B, C, D, F): ");
        scanf(" %c", &grade);
        switch (grade) {
        case 'A': printf("Good Progress\n"); break;
        case 'B': printf("Keep it up\n"); break;
        case 'C': printf("Needs More Practice\n"); break;
        case 'D': printf("Work Harder\n"); break;
        case 'F': printf("Failing – Serious Attention Needed\n"); break;
        default: printf("Invalid grade\n");
        }
        break;

    case 'f':
        printf("Enter grade (A, B, C, D, F): ");
        scanf(" %c", &grade);
        switch (grade) {
        case 'A': printf("Excellent Overall Performance\n"); break;
        case 'B': printf("Very Good\n"); break;
        case 'C': printf("Satisfactory but can improve\n"); break;
        case 'D': printf("Pass but Weak\n"); break;
        case 'F': printf("Retake Required\n"); break;
        default: printf("Invalid grade\n");
        }
        break;

    default:
        printf("Invalid exam type\n");
    }

    return 0;
}

