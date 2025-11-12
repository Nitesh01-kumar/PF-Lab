#include <stdio.h>

int main() {
    char ticketClass, withChild, group;
    int row;

    printf("Enter ticket class (B=Business, E=Economy): ");
    scanf(" %c", &ticketClass);

    printf("Enter seat row number: ");
    scanf("%d", &row);

    printf("Traveling with child under 5? (Y=Yes, N=No): ");
    scanf(" %c", &withChild);

    if (ticketClass == 'B' || withChild == 'Y'){
        group = 'A';
    }
    else if (ticketClass == 'E' && row >= 1 && row <= 10){
        group = 'B';
    }
    else if (ticketClass == 'E' && row >= 11 && row <= 20){
        group = 'C';
    }
    else {
        group = 'D';
    }

    printf("\nAssigned Boarding Group: %c\n", group);

    return 0;
}

