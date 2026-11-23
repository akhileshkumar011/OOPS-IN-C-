//Data members and Member functions


//In C++, data members are the variables defined inside a class that hold an object's data, while member functions are the functions inside a class that define what the object can do.

//Example
//Think of a smartphone: its data members are its specs and state (like batteryLevel = 85 or brand = "Samsung"), and its member functions are the actions it performs (like makeCall() or chargeBattery()).



//1. Data Members (Attributes / Properties)

//• What they are: Regular C++ variables (int, string, double, etc.) declared inside a class.
//• How they work: Each object you create gets its own separate copy of these variables in memory. Changing student1.marks does not affect student2.marks.
//• Rule: You cannot initialize them with values directly inside older C++ standards without a constructor, though modern C++ (C++11 and later) allows default values like int marks = 0



//2. Member Functions (Methods / Behaviors)

//• What they are: Functions declared inside a class that usually read or modify the class's data members.
//• How they work: Unlike data members, member functions are shared across all objects of that class to save memory. They automatically know which object called them.




//• Two ways to write them:
//1. Inside the class: Written directly within the { } of the class (good for short functions).
//2. Outside the class: Declared inside the class, then defined outside using the Scope Resolution Operator (::) (good for keeping large code organized).



//CODE

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // --- DATA MEMBERS ---
    string name;
    int rollNumber;

    // --- MEMBER FUNCTION (Defined inside the class) ---
    void setDetails(string n, int r) {
        name = n;
        rollNumber = r;
    }

    // --- MEMBER FUNCTION (Declared inside, defined outside) ---
    void display(); 
};

// Defining the member function outside the class using '::'
void Student::display() {
    cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
}

int main() {
    Student s1;
    
    // Using member functions to work with data members
    s1.setDetails("Aarav", 101); 
    s1.display(); // Output: Name: Aarav, Roll No: 101

    return 0;
}



