#include <stdio.h>

int main() {
    char user, pass, twoFA, otp;

    printf("Does username exist? (y/n): ");
    scanf(" %c", &user);

    if (user == 'n') {
        printf("Access Denied (No user)\n");
    }
    else {
        printf("Is password correct? (y/n): ");
        scanf(" %c", &pass);

        if (pass == 'n') {
            printf("Access Denied (Wrong password)\n");
        }
        else {
            printf("Is 2FA enabled? (y/n): ");
            scanf(" %c", &twoFA);

            if (twoFA == 'y') {
                printf("Is OTP correct? (y/n): ");
                scanf(" %c", &otp);

                if (otp == 'y')
                    printf("Access Granted\n");
                else
                    printf("Access Denied (Wrong OTP)\n");
            }
            else {
                printf("Access Granted (No 2FA)\n");
            }
        }
    }

    return 0;
}

