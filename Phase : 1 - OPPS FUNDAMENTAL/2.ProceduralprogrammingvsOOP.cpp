//Procedural programming vs OOP

//As highlighted in a consensus discussion on Reddit, procedural programming focuses on the exact operations and execution order needed to solve a problem, whereas OOP models real-world entities by defining what information objects store and how they interact

//Procedural Programming in C++

//cpp
#include <iostream>
#include <string>
using namespace std;

// Functions are separate from the data
void deposit(double &balance, double amount) {
    balance += amount;
}

void withdraw(double &balance, double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Insufficient funds" << endl;
    }
}

int main() {
    // Data is stored in standalon variables
    string accountHolder = "Aarav";
    double balance = 1000.0;

    // Step-by-step execution
    deposit(balance, 500.0);
    withdraw(balance, 200.0);

    cout << accountHolder << "'s balance: " << balance << endl; // Output: 1300
    return 0;
}






//2. Object-Oriented Programming (OOP) in C++
//In C++ OOP, you use a class with private and public access modifiers to protect the balance from unauthorized changes outside the class.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Data is hidden and protected
    string holder;
    double balance;

public:
    // Constructor to initialize the object
    BankAccount(string h, double b) {
        holder = h;
        balance = b;
    }

    // Public methods to safely interact with the data
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void displayBalance() {
        cout << holder << "'s balance: " << balance << endl;
    }
};

int main() {
    // Create an object and call its methods
    BankAccount aaravAccount("Aarav", 1000.0);
    aaravAccount.deposit(500.0);
    aaravAccount.withdraw(200.0);
    aaravAccount.displayBalance(); // Output: Aarav's balance: 1300

    return 0;
}
