#include <stdio.h>

int main() {
    char word[50];
    int i;

    printf("Enter a secret word (alphabets only): ");
    scanf("%[A-Za-z]", word);

    printf("\nCharacter positions in memory:\n");
    for(i = 0; word[i] != '\0'; i++) {
        printf("Index %d: %c\n", i, word[i]);
    }

    return 0;
}

