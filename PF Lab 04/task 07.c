#include <stdio.h>

int main() {
    int balance = 100000;   // Initial balance
    int dailyLimit = 50000; // Daily withdrawal limit
    int invalidAttempts = 0;
    int blocked = 0;
    int withdraw;
    char choice = 'y';

    while (choice == 'y' && !blocked) {
        printf("\nEnter amount to withdraw: ");
        scanf("%d", &withdraw);

        int caseType;

        if (withdraw > dailyLimit) {
            caseType = 1;  // Exceeds daily limit
        } else if (withdraw > balance) {
            caseType = 2;  // Insufficient balance
        } else {
            caseType = 3;  // Successful withdrawal
        }

        switch (caseType) {
            case 1:
                printf("? Transaction declined! Amount exceeds daily withdrawal limit of Rs.%d\n", dailyLimit);
                invalidAttempts++;
                break;

            case 2:
                printf("? Transaction declined! Insufficient balance. Your balance: Rs.%d\n", balance);
                invalidAttempts++;
                break;

            case 3:
                balance -= withdraw;
                printf("? Withdrawal successful! Amount: Rs.%d | Remaining balance: Rs.%d\n", withdraw, balance);
                break;
        }

        if (invalidAttempts >= 3) {
            printf("\n? Your account is blocked due to too many invalid attempts.\n");
            blocked = 1;
            break;
        }
        
        printf("\nDo you want to perform another transaction? (y/n): ");
        scanf(" %c", &choice);
    }
    printf("\nFinal Balance: Rs.%d\n", balance);
    if (blocked) {
        printf("Account status: BLOCKED\n");
    } else {
        printf("Account status: ACTIVE\n");
    }
    return 0;
}

