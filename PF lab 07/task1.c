#include <stdio.h>

int main() {
    int marks[10];      
    int i;
    int highest, lowest, sum = 0;
    float average;

    printf("Enter marks of 10 students:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    for (i = 0; i < 10; i++) {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];

        sum = sum + marks[i];
    }

    average = sum / 10.0;

    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks : %d\n", lowest);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

