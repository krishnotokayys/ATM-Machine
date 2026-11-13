#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){

    float balance = 0.0f;
    float cashDeposited, withdrawAmount, transferAmount;
    int option;
    int running = 1;
    int receiverNumber;
    char letter = ' ';

    int withdrawalSuccessful = 0;
    int correctPin = 1234;
    int pin;
    int loginAttempts = 3;
    int loggedin = 0;
    int apprunning = 1;
    int loginmenu = 0;
    char cardDetected = ' ';

    while(apprunning == 1){

        //---------------------mainscreen------------------------------
        printf("\n\t\t=-----------------------------------------------=\n");
        printf("\t\t|\t\t\t\t\t\t|\n");
        printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
        printf("\t\t|\t\t\t\t\t\t|");
        printf("\n\t\t=-----------------------------------------------=\n");
        printf("\n\t\t\t\t>>>WELCOME USER<<<\n");
        printf("\n\t\tInsert your card to proceed.\n");
        printf("\n\t\t[Y]Inserts card.");
        printf("\n\t\t[N]Does not insert card/Exit.");
        printf("\n\t\tInsert your card: ");
        scanf(" %c", &cardDetected);
        if (cardDetected == 'y' || cardDetected == 'Y'){
            printf("\n\t\tCard inserted successfully.\n");
            loginmenu = 1;
            Sleep(1500);
        }
        else if (cardDetected == 'n' || cardDetected == 'N'){
            printf("\n\t\tCard not inserted. Exiting ATM Machine...\n");
            Sleep(2000);
            return 0;
        }
        else{
            printf("\n\t\tInvalid option. Please try again.\n");
            Sleep(2000);
            system("cls");
        }
    while(cardDetected == 'y' || cardDetected == 'Y'){
        Sleep(2000);
        printf("\n\t\tCard Detected.");
        Sleep(1500);
        
    for(int loading = 1; loading <= 6; loading++){
        printf("\n\t\tLoading.");
        Sleep(300);
        system("cls");
        printf("\n\t\tLoading..");
        Sleep(300);
        system("cls");
        printf("\n\t\tLoading...");
        Sleep(300);
        system("cls");
    }

        while(loginmenu == 1){
        Sleep(150);
        printf("\n\t\t=-----------------------------------------------=\n");
        Sleep(150);
        printf("\t\t|\t\t\t\t\t\t|\n");
        Sleep(150);
        printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
        Sleep(150);
        printf("\t\t|\t\t\t\t\t\t|");
        Sleep(150);
        printf("\n\t\t=-----------------------------------------------=\n");
        Sleep(150);
        printf("\n\t\t\t\t>>>WELCOME USER<<<\n");
        Sleep(150);
        printf("\n\t\tProceed to login? Y/N");
        printf("\n\t\t[Y]Proceed");
        printf("\n\t\t[N]Exit\n");
        printf("\n\t\toption: ");
        scanf(" %c", &letter);
        system("cls");

        if(letter == 'y'|| letter == 'Y'){

            //------------------------PIN------------------------------------
            while(loginAttempts > 0 && loggedin == 0){
                printf("\n\t\t=-----------------------------------------------=\n");
                printf("\t\t|\t\t\t\t\t\t|\n");
                printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                printf("\t\t|\t\t\t\t\t\t|");
                printf("\n\t\t=-----------------------------------------------=\n");
                printf("\n\t\tPlease enter your PIN(4 digit): ");
                scanf("%d", &pin);
                system("cls");

                if(pin == correctPin){
                    loggedin = 1;
                    printf("\n\t\tPIN correct. You are now logged in.\n");
                    Sleep(2000);
                    system("cls");
                }
                else{
                    loginAttempts--;
                    if(loginAttempts > 0){
                        printf("\n\t\tIncorrect PIN. You have %d attempts left.\n", loginAttempts);
                    }
                    else{
                        printf("\n\t\tToo many attempts failed. Please try again later.");
                        Sleep(1000);
                        printf("\n\t\tExiting ATM Machine...\n");
                        Sleep(2000);
                        loginAttempts = 3;
                        return 1;
                    }
                }
            }

            if(loggedin == 1){
                running = 1;
                while (running) {

                    //---------------------Interface------------------------
                    Sleep(100);
                    printf("\n\t\t=-----------------------------------------------=\n");  
                    Sleep(100);
                    printf("\t\t|\t\t\t\t\t\t|\n");
                    Sleep(100);
                    printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                    Sleep(100);
                    printf("\t\t|\t\t\t\t\t\t|");
                    Sleep(100);
                    printf("\n\t\t=-----------------------------------------------=\n");
                    Sleep(100);
                    printf("\n\t\t[1]Balance Enquiry");
                    Sleep(100);
                    printf("\n\t\t[2]Withdrawal");
                    Sleep(100);
                    printf("\n\t\t[3]Cash Deposit");
                    Sleep(100);
                    printf("\n\t\t[4]Transfer");
                    Sleep(100);
                    printf("\n\t\t[5]Logout");
                    Sleep(100);
                    printf("\n\t\t[6]About");
                    Sleep(100);
                    printf("\n\t\tEnter your option(1-6): ");
                    scanf("%d", &option);

                    //---------------------Option---------------------------
                    switch(option){

                        case 1: {
                            system("cls");
                            printf("\t\t=-----------------------------------------------=\n");
                            printf("\t\t|\t\t\t\t\t\t|\n");
                            printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                            printf("\t\t|\t\t\t\t\t\t|");
                            printf("\n\t\t=-----------------------------------------------=\n");
                            printf("\n\t\t===============================================");
                            printf("\n\t\t>>You have %.2f balance.<<", balance);
                            printf("\n\t\tWould you like to Deposit? Y/N: ");
                            scanf(" %c", &letter);

                            if (letter == 'Y' || letter == 'y') {
                                printf("\n\t\tPlease enter amount to deposit");
                                printf("\n\t\tAmount: ");
                                scanf("%f", &cashDeposited);

                                if (cashDeposited > 0) {
                                    balance += cashDeposited;
                                    printf("\n\t\t===============================================");
                                    printf("\n\t\tYou have deposited: %.2f", cashDeposited);
                                    printf("\n\t\tYour new balance is: %.2f", balance);
                                    printf("\n\t\tYou have deposited successfully!");
                                    printf("\n\t\t===============================================");
                                    printf("\n\t\tEnter any key to continue... ");
                                    scanf(" %c", &letter);
                                } else {
                                    printf("\n\t\tInvalid amount.");
                                }
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            else if (letter == 'n' || letter == 'N') {
                                printf("\n\t\tCash deposit cancelled.");
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            else {
                                printf("\n\t\tInvalid input. Returning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            break;
                        }

                        case 2:
                            system("cls");
                            printf("\t\t=-----------------------------------------------=\n");
                            printf("\t\t|\t\t\t\t\t\t|\n");
                            printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                            printf("\t\t|\t\t\t\t\t\t|");
                            printf("\n\t\t=-----------------------------------------------=\n");
                            printf("\n\t\t===============================================");
                            printf("\n\t\t>>You have %.2f balance.<<", balance);
                            printf("\n\t\tPlease enter amount to withdraw");
                            printf("\n\t\tAmount: ");
                            scanf("%f", &withdrawAmount);

                            if (withdrawAmount > 0 && withdrawAmount <= balance){
                                balance -= withdrawAmount;
                                printf("\n\t\t===============================================");
                                printf("\n\t\tYou have withdrawn: %.2f", withdrawAmount);
                                printf("\n\t\tYour new balance is: %.2f\n", balance);
                                printf("\t\t================================================\n");
                                printf("\n\t\tEnter any key to continue...");
                                scanf(" %c", &letter);
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                                printf("\n\t\tYour current balance is: %.2f\n", balance);
                                printf("\n\t\tPlease get your money. Thankyou..");
                            }
                            else if (withdrawAmount > balance){
                                printf("\n\t\t===============================================");
                                printf("\n\t\tInsufficient balance.");
                                printf("\n\t\tYour current balance is: %.2f\n", balance);
                                printf("\t\t================================================\n");
                                printf("\n\t\tEnter any key to continue...");
                                scanf(" %c", &letter);
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            else {
                                printf("\n\t\tInvalid amount.\n");
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(2000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                                
                            }
                            break;

                        case 3: {
                            system("cls");
                            printf("\t\t=-----------------------------------------------=\n");
                            printf("\t\t|\t\t\t\t\t\t|\n");
                            printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                            printf("\t\t|\t\t\t\t\t\t|");
                            printf("\n\t\t=-----------------------------------------------=\n");
                            printf("\n\t\t===============================================");
                            printf("\n\t\tWould you like to Deposit? Y/N: ");
                            scanf(" %c", &letter);

                            if (letter == 'Y' || letter == 'y') {
                                printf("\n\t\tPlease enter amount to deposit");
                                printf("\n\t\tAmount: ");
                                scanf("%f", &cashDeposited);

                                if (cashDeposited > 0) {
                                    balance += cashDeposited;
                                    printf("\n\t\t===============================================");
                                    printf("\n\t\tYou have deposited: %.2f", cashDeposited);
                                    printf("\n\t\tYour new balance is: %.2f", balance);
                                    printf("\n\t\tYou have deposited successfully!");
                                    printf("\n\t\t================================================");
                                    printf("\n\t\tEnter any key to continue...");
                                    scanf(" %c", &letter);

                                } else {
                                    printf("\n\t\tInvalid amount.");
                                }
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            else if (letter == 'n' || letter == 'N') {
                                printf("\n\t\tCash deposit cancelled.");
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000 );
                                system("cls");
                                printf("\n\t\t>>Returned to main menu.\n");
                            }
                            else {
                                printf("\n\t\t>>Invalid input. Returning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            break;
                        }

                        case 4: {
                            system("cls");
                            printf("\t\t=-----------------------------------------------=\n");
                            printf("\t\t|\t\t\t\t\t\t|\n");
                            printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                            printf("\t\t|\t\t\t\t\t\t|");
                            printf("\n\t\t=-----------------------------------------------=\n");
                            printf("\n\t\t===============================================");;
                            char receiverName[50] = " ";
                            printf("\n\t\tWould you like to transfer money? Y/N: ");
                            scanf(" %c", &letter);

                            if (letter == 'Y' || letter == 'y') {
                                printf("\n\t\tEnter the receiver's Name(first name of the receiver.)");
                                printf("\n\t\tName: ");
                                scanf(" %s", receiverName);
                                printf("\n\t\tEnter the Account number of the receiver(11 digit number.)");
                                printf("\n\t\tNumber: ");
                                scanf("%d", &receiverNumber);
                                printf("\n\t\tPlease enter amount to transfer");
                                printf("\n\t\tAmount: ");
                                scanf("%f", &transferAmount);

                                if (transferAmount > 0 && transferAmount <= balance) {
                                    balance -= transferAmount;
                                    printf("\n\t\t===============================================");
                                    printf("\n\t\tYou have transfered to %s", receiverName);
                                    printf("\n\t\tYou have transfered: %.2f", transferAmount);
                                    printf("\n\t\tYour new balance is: %.2f", balance);
                                    printf("\n\t\tYou have transfered successfully!");
                                    printf("\n\t\t================================================");
                                    printf("\n\t\tEnter any key to continue...");
                                    scanf(" %c", &letter);
                                } else {
                                    printf("\n\t\tYou do not have enough balance to proccess this transaction...");
                                    printf("\n\t\tEnter any key to continue...");
                                    scanf(" %c", &letter);
                                }
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            else if (letter == 'n' || letter == 'N') {
                                printf("\n\t\tbank transfer cancelled.");
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            else {
                                printf("\n\t\tInvalid input. Returning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            break;
                        }

                        case 5:
                            system("cls");
                            printf("\n\t\tLogging out...\n");
                            printf("\n\t\tReturning to Login Screen...\n");
                            Sleep(3000);
                            system("cls");
                            loggedin = 0;
                            loginAttempts = 3;
                            running = 0;
                            cardDetected = 0;
                            loginmenu = 0;
                            break;

                        case 6:
                        system("cls");
                            printf("\t\t=-----------------------------------------------=\n");
                            printf("\t\t|\t\t\t\t\t\t|\n");
                            printf("\t\t|\t\t>>>>ATM MACHINE<<<<\t\t|\n");
                            printf("\t\t|\t\t\t\t\t\t|");
                            printf("\n\t\t=-----------------------------------------------=   \n");
                            printf("\n\t\t=================================================");
                            printf("\n\t\tCCS102B - Performance Task - ATM Machine\n");
                            printf("\n\t\tGroup Members:\n");
                            printf("\n\t\t1. June Christian H. Pinili");
                            printf("\n\t\t2. Xavier B. Runge");
                            printf("\n\t\t3. Jazzel Jade Lloa\n");
                            printf("\t\t==================================================\n");
                            printf("\n\t\tEnter any key to return to main menu: ");
                            scanf(" %c", &letter);
                            if (letter == 'Y' || letter == 'y') {
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            else {
                                printf("\n\t\tReturning to main menu...\n");
                                Sleep(3000);
                                system("cls");
                            }
                            break;

                        default:
                            printf("\n\t\t>>Invalid option.<<\n\n");
                            Sleep(2500);
                            system("cls");
                    }
                }
            }
        }
        else if(letter == 'n'|| letter == 'N'){
            printf("\n\t\tExiting ATM Machine...\n");
            printf("\n\t\t>>PLEASE TAKE YOUR CARD<<\n");
            printf("\t\tThank you.\n");
            loggedin = 0;
            loginAttempts = 3;
            running = 0;
            apprunning = 0;
            cardDetected = 0;
            loginmenu = 0;
            Sleep(3000);
            system("cls");
        }
        else{
            printf("\n\t\t>>invalid option.<<");
            Sleep(800);
            system("cls");
                }
            }
        }
    }
}