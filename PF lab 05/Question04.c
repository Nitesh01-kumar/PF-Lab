#include <stdio.h>

int main() {
    char login, type, phd;

    printf("Are you logged in? (y/n): ");
    scanf(" %c", &login);

    if (login == 'n' || login == 'N') {
        printf("Access Denied (Not logged in)\n");
    }
    else {
        printf("Membership type (f=Free, s=Standard, p=Premium): ");
        scanf(" %c", &type);

        if (type == 'f')
            printf("Access: Open e-books only\n");
        else if (type == 's')
            printf("Access: E-books and Journals\n");
        else {
            printf("Are you a PhD student? (y/n): ");
            scanf(" %c", &phd);

            if (phd == 'y' || phd == 'Y')
                printf("Access: All resources + Historical collections\n");
            else
                printf("Access: All resources (Premium)\n");
        }
    }

    return 0;
}

