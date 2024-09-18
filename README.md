# Simple-ATM-machine

## Project Overview

This project is a simple ATM machine simulation built in C++. The program allows users to:

- Enter and confirm their PIN.
- Deposit money into their account.
- Withdraw money from their account.
- Display their balance after each transaction.

The program simulates a basic ATM dashboard with options for depositing and withdrawing money, while maintaining a running balance.

## Features

- **PIN Authentication**: Users are prompted to enter and confirm their PIN before accessing the dashboard.
- **Deposit**: Users can deposit an amount, which updates the balance accordingly.
- **Withdraw**: Users can withdraw an amount, which reduces the balance.
- **Balance Validation**: The program checks and indicates if the balance is greater than zero after the deposit.

## How It Works

1. **PIN Setup**:
   - The user is asked to enter their PIN and confirm it.
   - If both entries match, the process continues; otherwise, the program can be modified to display an error (currently not implemented).

2. **ATM Dashboard**:
   - Users can choose to deposit or withdraw money.
   - A balance is maintained and updated after each transaction.

3. **Deposit and Withdraw**:
   - The user inputs a deposit amount, which is added to the balance.
   - The program then asks for a withdrawal amount, which is subtracted from the balance.
   
4. **Balance Check**:
   - The program checks if the balance is greater than zero and displays a message indicating the same.

## Code Analysis

The project uses basic C++ concepts like input/output operations, simple conditional logic (without using `if` or `else` statements), and basic arithmetic for managing balances. 

## Variables
- `pin`, `confirm_pin`: Used for storing the user's PIN and confirming it.
- `Balance`: Stores the user's account balance.
- `Deposit`, `Withdraw`: Store the amounts to be deposited and withdrawn, respectively.
- `istrue`: A boolean that stores whether the PIN and confirmed PIN are identical.
- `is_greater`: A boolean that checks if the balance is greater than 0.

## Logic Flow
- The PIN and confirmation PIN are entered, and the program proceeds based on their equality.
- The user is then presented with the option to deposit money, which updates the balance.
- The balance is checked, and the user is shown if their balance is above zero.
- The user can then withdraw an amount, and the balance is updated accordingly.


## Requirements

- A C++ compiler (e.g., GCC).
  

This project demonstrates a fundamental ATM system using basic C++ concepts.
