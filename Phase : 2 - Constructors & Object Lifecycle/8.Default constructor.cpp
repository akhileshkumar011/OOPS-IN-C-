//Default constructor


//In C++, a default constructor is a special member function that takes no arguments and is automatically called when an object is created without passing any values.
//Its main job is to initialize an object's data members with safe, predictable starting values so they don't contain random "garbage" values from memory.





//Rules of a Default Constructor

//• Same name as the class: If your class is named Car, the constructor must also be named Car().
//• No return type: Not even void.
//• No parameters: The parentheses () are empty (or all parameters have default values).
//• Must be public: So that objects can actually be created outside the class (like in main()).



// code 
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    // DEFAULT CONSTRUCTOR (No parameters, no return type)
    Student() {
        name = "Unknown";
        grade = 0;
        cout << "Default constructor called!" << endl;
    }

    void display() const {
        cout << "Student: " << name << ", Grade: " << grade << endl;
    }
};

int main() {
    // Creating an object automatically triggers the default constructor
    Student s1;  // Output: Default constructor called!
    
    s1.display(); // Output: Student: Unknown, Grade: 0

    return 0;
}




//• Compiler-generated default: If you don't write any constructor in your class, C++ automatically creates a hidden, empty default constructor for you behind the scenes. However, it leaves basic variables (int, double) uninitialized with garbage values.
//• Watch out when adding other constructors: If you write a constructor that takes arguments (a parameterized constructor), C++ stops generating the automatic default constructor. If you still want to create objects with Student s1;, you must explicitly write Student() {} yourself.