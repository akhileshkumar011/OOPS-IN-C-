//Encapsulation

//In C++, encapsulation is the practice of bundling data members and the member functions that operate on them into a single unit (a class), while restricting direct access to the internal data.
//Think of a medical capsule: the medicine (your data) is safely sealed inside a protective outer shell (the class). You interact with the capsule as a whole rather than touching the raw powder inside.

//How Encapsulation Works in C++

//Encapsulation relies on two steps:
//1. Hide the data: Mark data members as private so code outside the class cannot modify them directly.
//2. Provide controlled access: Create public member functions—commonly called getters (to read data) and setters (to update data with validation rules).


//C++ Code Example

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    // 1. Hidden data (cannot be changed directly from main)
    string name;
    int salary;

public:
    // 2. Setter function with validation logic
    void setSalary(int s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Error: Salary cannot be negative!" << endl;
            salary = 0;
        }
    }

    // 3. Getter function to safely read the private data
    int getSalary() {
        return salary;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

int main() {
    Employee emp;
    emp.setName("Rohan");

    // Trying to set an invalid value gets blocked by our setter's rule
    emp.setSalary(-5000);  // Output: Error: Salary cannot be negative!
    
    // Setting a valid value works
    emp.setSalary(60000);
    cout << emp.getName() << "'s Salary: " << emp.getSalary() << endl; // Output: Rohan's Salary: 60000

    return 0;
}




//Why Encapsulation Matters

//• Data Protection (Validation): Without encapsulation, anyone in main() could write emp.salary = -5000;. Setters let you enforce rules before saving data.
//• Flexibility: You can change how data is stored internally inside the class without breaking the code in main(), as long as the public function names stay the same.
//• Read-Only or Write-Only Control: If you provide only a getter (and no setter), the data becomes read-only from the outside.