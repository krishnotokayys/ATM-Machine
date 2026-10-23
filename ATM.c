#include <stdio.h>

int main(){

    float balance = 0.0f;
    float cashDeposited, withdrawAmount, transferAmount;
    int option;
    int running = 1;

    while (running) {

        //---------------------Interface------------------------
        printf("\t\t#################################################");
        printf("\n\t\t#\t\t>>ATM MACHINE<<\t\t\t#");
        printf("\n\t\t#################################################");
        printf("\n\n\t\t[1]Balance Enquiry");
        printf("\n\t\t[2]Withdrawal");
        printf("\n\t\t[3]Cash Deposit");
        printf("\n\t\t[4]Transfer");
        printf("\n\t\t[5]Exit");
        printf("\n\t\tEnter your option(1-5): ");
        scanf("%d", &option);

        //---------------------Option---------------------------
        switch(option){
            case 1: {
                char letter = ' ';
                printf("\n\t\t>>You have %.2f balance.<<", balance);
                printf("\n\t\tWould you like to Deposit? Y/N: ");
                scanf(" %c", &letter);

                if (letter == 'Y' || letter == 'y') {
                    printf("\n\t\tPlease enter amount to deposit");
                    printf("\n\t\tAmount: ");
                    scanf("%f", &cashDeposited);

                    if (cashDeposited > 0) {
                        balance += cashDeposited;
                        printf("\n\t\tYou have deposited: %.2f", cashDeposited);
                        printf("\n\t\tYour new balance is: %.2f", balance);
                        printf("\n\t\tYou have deposited successfully!");
                    } else {
                        printf("\n\t\tInvalid amount.");
                    }
                    printf("\n\t\tReturning to main menu...\n");
                }
                else if (letter == 'n' || letter == 'N') {
                    printf("\n\t\tReturning to main menu...\n");
                }
                else {
                    printf("\n\t\tInvalid input. Returning to main menu...\n");
                }
                break;
            }

            case 2:
                printf("\n\t\tPlease enter amount to withdraw");
                printf("\n\t\tAmount: ");
                scanf("%f", &withdrawAmount);
                if (withdrawAmount > 0 && withdrawAmount <= balance){
                    balance -= withdrawAmount;
                    printf("\n\t\tYou have withdrawn: %.2f", withdrawAmount);
                    printf("\n\t\tYour new balance is: %.2f\n\n", balance);
                }
                else if (withdrawAmount > balance){
                    printf("\n\t\tInsufficient balance.");
                    printf("\n\t\tYour current balance is: %.2f\n", balance);
                }
                else {
                    printf("\n\t\tInvalid amount.\n");
                }
                break;

            case 3:
                char letter = ' ';
                printf("\n\t\tWould you like to Deposit? Y/N: ");
                scanf(" %c", &letter);

                if (letter == 'Y' || letter == 'y') {
                    printf("\n\t\tPlease enter amount to deposit");
                    printf("\n\t\tAmount: ");
                    scanf("%f", &cashDeposited);

                    if (cashDeposited > 0) {
                        balance += cashDeposited;
                        printf("\n\t\tYou have deposited: %.2f", cashDeposited);
                        printf("\n\t\tYour new balance is: %.2f", balance);
                        printf("\n\t\tYou have deposited successfully!");
                    } else {
                        printf("\n\t\tInvalid amount.");
                    }
                    printf("\n\t\tReturning to main menu...\n");
                }
                else if (letter == 'n' || letter == 'N') {
                    printf("\n\t\tReturning to main menu...\n");
                }
                else {
                    printf("\n\t\tInvalid input. Returning to main menu...\n");
                }
                break;

            case 4:
                printf("test4\n\n");
                break;

            case 5:
                printf("\n\t\tThank you for using our ATM.\n");
                running = 0;
                break;

            default:
                printf("\n\t\tInvalid option.\n\n");
        }
    }

    return 0;
}