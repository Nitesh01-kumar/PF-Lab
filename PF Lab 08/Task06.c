#include <stdio.h>

int main() {
	int i, j;
    int shelves, books;
    printf("Enter number of shelves: ");
    scanf("%d", &shelves);
    printf("Enter number of books per shelf: ");
    scanf("%d", &books);

    int bookID[shelves][books];

    for (i = 0; i < shelves; i++) {
        printf("Enter book IDs for shelf %d:\n", i + 1);
        for (j = 0; j < books; j++)
            scanf("%d", &bookID[i][j]);
    }

    printf("\nLibrary Arrangement:\n");
    for (i = 0; i < shelves; i++) {
        printf("Shelf %d: ", i + 1);
        for (j = 0; j < books; j++)
            printf("%d ", bookID[i][j]);
        printf("\n");
    }
    return 0;
}

