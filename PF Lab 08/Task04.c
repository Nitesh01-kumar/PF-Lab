#include <stdio.h>

int main() {
    int students, subjects;
    int i, j;
    printf("Enter number of students: ");
    scanf("%d", &students);
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    int marks[students][subjects];

    for (i = 0; i < students; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < subjects; j++)
            scanf("%d", &marks[i][j]);
    }

    for (i = 0; i < students; i++) {
        int total = 0;
        for (j = 0; j < subjects; j++)
            total += marks[i][j];
        printf("Total marks of student %d = %d\n", i + 1, total);
    }
    return 0;
}

