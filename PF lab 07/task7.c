#include <stdio.h>

int main() {
    int numbers[10], i, j, count, maxCount = 0, mostCommon = 0;
    printf("Enter favorite numbers (1 to 10):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 10; i++) {
        count = 0;
        for(j = 0; j < 10; j++) {
            if(numbers[i] == numbers[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mostCommon = numbers[i];
        }
    }
    printf("Most common number: %d\n", mostCommon);
    printf("Occurrences: %d\n", maxCount);
    return 0;
}

