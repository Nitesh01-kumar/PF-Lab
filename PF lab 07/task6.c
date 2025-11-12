#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    printf("Enter password (no alphabets allowed): ");
    scanf("%[^A-Za-z]", password);
    printf("Password: %s\n", password);
    printf("Password Length: %zu\n", strlen(password));
    return 0;
}

