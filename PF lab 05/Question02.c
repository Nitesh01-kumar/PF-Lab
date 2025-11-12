#include <stdio.h>

int main() {
    char person;   
    char subType;  
    char appointment;
    int time;

    printf("Enter person (s=student, f=faculty, v=visitor): ");
    scanf(" %c", &person);

    if (person == 's') {
        printf("Student type (u=Undergraduate, p=Postgraduate): ");
        scanf(" %c", &subType);

        if (subType == 'u') {
            printf("Enter time (0-23): ");
            scanf("%d", &time);

            if (time >= 8 && time <= 18) {
                printf("Access Granted (UG Student)\n");
            } else {
                printf("Access Denied (UG outside hours)\n");
            }
        }
        else {
            printf("Access Granted (PG Student)\n");
        }
    }
    else if (person == 'f') {
        printf("Faculty type (f=Full-Time, v=Visiting): ");
        scanf(" %c", &subType);

        if (subType == 'f') {
            printf("Access Granted (Full-time Faculty)\n");
        } else {
            printf("Enter current time (0-23): ");
            scanf("%d", &time);

            if (time >= 8 && time <= 18) {
                printf("Access Granted (Visiting Faculty)\n");
            } else {
                printf("Access Denied (Visiting outside hours)\n");
            }
        }
    }
    else {
        printf("Do you have a valid appointment? (y/n): ");
        scanf(" %c", &appointment);

        if (appointment == 'y' || appointment == 'Y') {
            printf("Access Granted (Visitor)\n");
        } else {
            printf("Access Denied (No appointment)\n");
        }
    }

    return 0;
}

