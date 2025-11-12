#include <stdio.h>

int main() {
    int age;
    char rating, sub;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Enter movie rating (g=General, p=PG-13, r=Restricted): ");
        scanf(" %c", &rating);

        if (rating == 'g' || rating == 'p')
            printf("Access Granted (Child Safe)\n");
        else
            printf("Access Denied (Age restriction)\n");
    }
    else {
        printf("Subscription type (b=Basic, p=Premium): ");
        scanf(" %c", &sub);

        if (sub == 'b')
            printf("Access Granted: Standard Definition (SD)\n");
        else
            printf("Access Granted: High Definition (HD)\n");
    }

    return 0;
}

