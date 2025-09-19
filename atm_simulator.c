#include <stdio.h>

// Global variable to store account balance
double balance = 100000.00; // Initial balance of 100,000.00 RWF

// Function prototypes
void display_menu();
double check_balance();
void deposit();
void withdraw();
void clear_input_buffer();
int get_user_choice();
double get_amount(const char* operation);

/**
 * Main function - Entry point of the ATM program
 * Implements the main loop and menu system
 */
int main() {
    int choice;
    
    printf("=================================================\n");
    printf("       WELCOME TO THE ATM MACHINE SIMULATOR     \n");
    printf("=================================================\n");
    printf("Your initial balance is: %.2f RWF\n\n", balance);
    
    // Main program loop - continues until user chooses to exit
    do {
        display_menu();
        choice = get_user_choice();
        
        switch (choice) {
            case 1:
                printf("\n--- BALANCE INQUIRY ---\n");
                printf("Your current balance is: %.2f RWF\n\n", check_balance());
                break;
                
            case 2:
                printf("\n--- DEPOSIT ---\n");
                deposit();
                break;
                
            case 3:
                printf("\n--- WITHDRAWAL ---\n");
                withdraw();
                break;
                
            case 4:
                printf("\n--- EXIT ---\n");
                printf("Thank you for using our ATM service!\n");
                printf("Have a great day!\n");
                break;
                
            default:
                printf("\n❌ Invalid choice! Please select a number between 1-4.\n\n");
                break;
        }
        
        // Pause before showing menu again (except on exit)
        if (choice >= 1 && choice <= 3) {
            printf("Press Enter to continue...");
            getchar();
            printf("\n");
        }
        
    } while (choice != 4);
    
    return 0;
}

/**
 * Displays the main ATM menu options
 */
void display_menu() {
    printf("=================================================\n");
    printf("                 ATM MAIN MENU                  \n");
    printf("=================================================\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("=================================================\n");
    printf("Please select an option (1-4): ");
}

/**
 * Returns the current account balance
 * @return Current balance as a double
 */
double check_balance() {
    return balance;
}

/**
 * Handles money deposit operation
 * Validates input and updates balance if valid
 */
void deposit() {
    double amount = get_amount("deposit");
    
    if (amount > 0) {
        balance += amount;
        printf("✅ Successfully deposited %.2f RWF\n", amount);
        printf("Your new balance is: %.2f RWF\n\n", balance);
    } else {
        printf("❌ Invalid amount! Deposit amount must be positive.\n\n");
    }
}

/**
 * Handles money withdrawal operation
 * Validates input and checks for sufficient funds
 */
void withdraw() {
    double amount = get_amount("withdraw");
    
    if (amount <= 0) {
        printf("❌ Invalid amount! Withdrawal amount must be positive.\n\n");
        return;
    }
    
    if (amount > balance) {
        printf("❌ Insufficient funds!\n");
        printf("Your current balance is: %.2f RWF\n", balance);
        printf("You cannot withdraw %.2f RWF\n\n", amount);
    } else {
        balance -= amount;
        printf("✅ Successfully withdrew %.2f RWF\n", amount);
        printf("Your new balance is: %.2f RWF\n\n", balance);
    }
}

/**
 * Clears the input buffer to handle invalid input
 */
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/**
 * Gets and validates user menu choice
 * @return Valid menu choice as integer
 */
int get_user_choice() {
    int choice;
    
    while (scanf("%d", &choice) != 1) {
        printf("❌ Invalid input! Please enter a number: ");
        clear_input_buffer();
    }
    clear_input_buffer(); // Clear any remaining characters
    
    return choice;
}

/**
 * Gets and validates monetary amount from user
 * @param operation String describing the operation (deposit/withdraw)
 * @return Amount entered by user as double
 */
double get_amount(const char* operation) {
    double amount;
    
    printf("Enter amount to %s: ", operation);
    
    while (scanf("%lf", &amount) != 1) {
        printf("❌ Invalid input! Please enter a valid amount: ");
        clear_input_buffer();
    }
    clear_input_buffer(); // Clear any remaining characters
    
    return amount;
}
