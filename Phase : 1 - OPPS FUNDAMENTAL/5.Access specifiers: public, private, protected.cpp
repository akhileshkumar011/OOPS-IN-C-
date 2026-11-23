//Access specifiers: public, private, protected

//In C++, access specifiers (public, private, and protected) are keywords that control where a class's data members and member functions can be accessed from.

//They are the core mechanism behind encapsulation—protecting sensitive data from accidental changes while exposing safe ways to interact with it.


//The Three Access Specifiers

//• public (Open to all): Members declared as public can be accessed from anywhere—inside the class, inside child classes, and outside the class (such as in main()).
//• private (Strictly internal): Members declared as private can only be accessed by member functions inside the same class. Even child classes cannot access them directly. (Note: In C++, if you don't specify an access level, everything in a class defaults to private.)
//• protected (Family only): Members declared as protected cannot be accessed from outside the class (like in main()), but they can be accessed by derived (child) classes through inheritance.



// code 

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance = 1000.0; // Strictly hidden from main() and child classes

protected:
    int accountID = 5544;    // Hidden from main(), accessible to child classes

public:
    // Public function acts as a safe gateway to private data
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

// Child class inheriting from BankAccount
class SavingsAccount : public BankAccount {
public:
    void showID() {
        cout << "Account ID: " << accountID << endl; // OK: protected is accessible here
        // cout << balance; // ERROR: private is NOT accessible even in child classes
    }
};

int main() {
    BankAccount acc;
    
    acc.deposit(500);                       // OK: deposit() is public
    cout << acc.getBalance() << endl;       // OK: Output is 1500
    
    // acc.balance = 999999;                // ERROR: balance is private
    // cout << acc.accountID;               // ERROR: accountID is protected

    return 0;
}
