# ATM System Simulator 🏧

A comprehensive C program that simulates the basic functions of an ATM (Automated Teller Machine).

## ✨ Features

- **Check Balance**: Display current account balance
- **Deposit Money**: Add funds to the account with validation
- **Withdraw Money**: Remove funds with sufficient balance checking
- **Exit Program**: Graceful termination of the application
- **Input Validation**: Comprehensive error handling for all user inputs
- **User-Friendly Interface**: Clear menu system with visual feedback

## 🔧 Requirements

- **Compiler**: GCC (GNU Compiler Collection) or any C99-compatible compiler
- **Operating System**: Windows, Linux, or macOS
- **Memory**: Minimal system requirements
- **Dependencies**: Standard C library only

## 📦 Installation

### Option 1: Clone the Repository
```bash
git clone https://github.com/TammyBriggs/ATM-System.git
cd ATM-System
```

### Option 2: Download ZIP
1. Click the "Code" button on GitHub
2. Select "Download ZIP"
3. Extract the files to your desired location

### Compilation
```bash
gcc -o ATM-System atm_system.c
```

### Alternative Compilation with Debugging
```bash
gcc -g -Wall -Wextra -o ATM-System atm_system.c
```

## 🚀 Usage

### Running the Program
```bash
./atm_system
```

### On Windows
```cmd
atm_system.exe
```

### Initial Setup
- The program starts with an initial balance of 100,000.00 RWF
- Follow the on-screen menu to perform operations
- Enter your choice (1-4) when prompted


## 📚 Functions Overview

### Core ATM Functions
| Function | Purpose |
|----------|---------|
| `check_balance()` | Returns current balance |
| `deposit()` | Adds money to account |
| `withdraw()` | Removes money from account |
| `display_menu()` | Shows main menu options |

### Utility Functions
| Function | Purpose |
|----------|---------|------------|-------------|
| `get_user_choice()` | Validates menu selection |
| `get_amount()` | Gets monetary input |
| `clear_input_buffer()` | Clears invalid input |

## 🛡️ Input Validation

### Deposit Validation
- ✅ Amount must be positive (> 0)
- ✅ Must be a valid number
- ❌ Rejects negative values
- ❌ Handles non-numeric input

### Withdrawal Validation
- ✅ Amount must be positive (> 0)
- ✅ Must not exceed current balance
- ✅ Must be a valid number
- ❌ Prevents overdrafts
- ❌ Handles non-numeric input

### Menu Choice Validation
- ✅ Must be integer between 1-4
- ❌ Rejects non-numeric input
- ❌ Handles out-of-range values

## 💡 Example Usage

```
=================================================
       WELCOME TO THE ATM MACHINE SIMULATOR     
=================================================
Your initial balance is: 100,000.00 RWF

=================================================
                 ATM MAIN MENU                  
=================================================
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
=================================================
Please select an option (1-4): 2

--- DEPOSIT ---
Enter amount to deposit: 25,000.00 RWF
✅ Successfully deposited 25,000.00 RWF
Your new balance is: 125,000.00 RWF

Press Enter to continue...

=================================================
                 ATM MAIN MENU                  
=================================================
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
=================================================
Please select an option (1-4): 3

--- WITHDRAWAL ---
Enter amount to withdraw: 20,000.00 RWF
✅ Successfully withdrew 20,000.00 RWF
Your new balance is: 105,000.00 RWF

Press Enter to continue...
```

## Technical Details

### Design Patterns
- **Modular Programming**: Each operation in separate function
- **Input Validation**: Centralized validation functions
- **User Experience**: Clear feedback and error messages

### Code Quality Features
- **Readable Code**: Clear variable names and consistent formatting
- **Comments**: Comprehensive function documentation
- **Error Handling**: Robust input validation
- **User Feedback**: Visual indicators (✅/❌) for operations


## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author

**Tamunotonye Briggs**
