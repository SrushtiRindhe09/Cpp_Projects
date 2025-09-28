/*Create a class Bank Account with private data members for account number, name, and balance. Use public methods for deposit, withdraw, and display.Demonstrate data abstraction and information hiding.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
   
    int accountNumber;
    string name;
    double balance;

public:
   
    BankAccount(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        name = accName;
        balance = initialBalance;
    }
    
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
    }
};


int main() {
   
    BankAccount account1(101, "Srushti Rindhe", 5000.0);
    
    account1.display();
    cout << endl;

    // Deposit money
    account1.deposit(1500);
    account1.display();
    cout << endl;

    // Withdraw money
    account1.withdraw(2000);
    account1.display();
    cout << endl;
     account1.withdraw(6000);  
    account1.display();

    return 0;
}

/*....output.....
Account Number: 101
Account Holder: Srushti Rindhe
Balance: $5000

Deposited: $1500
Account Number: 101
Account Holder: Srushti Rindhe
Balance: $6500

Withdrawn: $2000
Account Number: 101
Account Holder: Srushti Rindhe
Balance: $4500

Insufficient balance or invalid amount!
Account Number: 101
Account Holder: Srushti Rindhe
Balance: $4500

*/