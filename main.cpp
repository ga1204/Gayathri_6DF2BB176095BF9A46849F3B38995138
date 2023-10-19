#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account attributes
    BankAccount(const std::string& accNumber, const std::string& accName, double initialBalance)
        : accountNumber(accNumber), accountHolderName(accName), accountBalance(initialBalance) {}

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("1234567890", "John Doe", 1000.0);

    // Deposit and display balance
    myAccount.deposit(500.0);
    myAccount.displayBalance();

    // Withdraw and display balance
    myAccount.withdraw(200.0);
    myAccount.displayBalance();

    // Attempt an invalid withdrawal
    myAccount.withdraw(1500.0);

    return 0;
}





