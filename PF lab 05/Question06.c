#include <stdio.h>

int main() {
    char vehicle, violation;

    printf("Enter vehicle type (c=Car, m=Motorcycle, t=Truck): ");
    scanf(" %c", &vehicle);

    switch (vehicle) {
    case 'c':
        printf("Violation (o=Overspeed, s=Signal Break, p=Wrong Parking): ");
        scanf(" %c", &violation);
        switch (violation) {
        case 'o': printf("Fine = Rs. 3000\n"); break;
        case 's': printf("Fine = Rs. 5000\n"); break;
        case 'p': printf("Fine = Rs. 2000\n"); break;
        default: printf("Invalid violation\n");
        }
        break;

    case 'm':
        printf("Violation (o=Overspeed, s=Signal Break, p=Wrong Parking): ");
        scanf(" %c", &violation);
        switch (violation) {
        case 'o': printf("Fine = Rs. 2000\n"); break;
        case 's': printf("Fine = Rs. 4000\n"); break;
        case 'p': printf("Fine = Rs. 1000\n"); break;
        default: printf("Invalid violation\n");
        }
        break;

    case 't':
        printf("Violation (o=Overspeed, s=Signal Break, p=Wrong Parking): ");
        scanf(" %c", &violation);
        switch (violation) {
        case 'o': printf("Fine = Rs. 8000\n"); break;
        case 's': printf("Fine = Rs. 10000\n"); break;
        case 'p': printf("Fine = Rs. 5000\n"); break;
        default: printf("Invalid violation\n");
        }
        break;

    default:
        printf("Invalid vehicle type\n");
    }

    return 0;
}

