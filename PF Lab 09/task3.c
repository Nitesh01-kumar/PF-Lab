#include <stdio.h>
#include <stdlib.h>

void generatePassword(char name[], char contact[], int minLen, int numDigits, int numSpecial) {
    char special[10] = {'#', '$', '%', '&', '@', '!', '*', '+', '-', '?'};
    char password[50];
    int i, j = 0, contactLen = 0;

    for (i = 0; i < 3 && name[i] != '\0'; i++) {
        password[j] = name[i];
        j++;
    }

    for (i = 0; contact[i] != '\0'; i++) {
        contactLen++;
    }

    for (i = contactLen - 3; i < contactLen; i++) {
        if (i >= 0) {
            password[j] = contact[i];
            j++;
        }
    }

    for (i = 0; i < numDigits; i++) {
        password[j] = '0' + rand() % 10;
        j++;
    }

    for (i = 0; i < numSpecial; i++) {
        password[j] = special[rand() % 10];
        j++;
    }

    while (j < minLen) {
        password[j] = 'a' + rand() % 26;
        j++;
    }

    password[j] = '\0';

    printf("\nYour Password: ");
    for (i = 0; password[i] != '\0'; i++) {
        printf("%c", password[i]);
    }
    printf("\n");
}

int main() {
    char name[20], gender[10], contact[15];
    int minLen, numDigits, numSpecial;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter gender: ");
    scanf("%s", gender);
    printf("Enter contact: ");
    scanf("%s", contact);
    printf("Minimum length: ");
    scanf("%d", &minLen);
    printf("Digits: ");
    scanf("%d", &numDigits);
    printf("Special characters: ");
    scanf("%d", &numSpecial);

    generatePassword(name, contact, minLen, numDigits, numSpecial);
    return 0;
}

