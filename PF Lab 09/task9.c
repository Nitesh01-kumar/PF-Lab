#include <stdio.h>

void inputMarks(int *marks, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Enter marks for Student %d: ", i+1);
        scanf("%d", marks + i);
    }
}

void displayMarks(int *marks, int size){
    int i;
    printf("\nStudent Marks and Addresses:\n");
    for(i=0; i<size; i++){
        printf("Student %d: Marks = %d, Address = %p\n", i+1, *(marks + i), (marks + i));
    }
}

int calculateTotal(int *marks, int size){
    int total = 0, i;
    for(i=0; i<size; i++){
        total += *(marks + i);
    }
    return total;
}

float calculateAverage(int total, int size){
    return total / (float)size;
}

int main(){
    int studentMarks[5];
    int total;
    float avg;

    inputMarks(studentMarks, 5);
    displayMarks(studentMarks, 5);
    total = calculateTotal(studentMarks, 5);
    avg = calculateAverage(total, 5);

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}

