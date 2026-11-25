//Parameterized constructor

//In C++, a parameterized constructor is a constructor that accepts arguments, allowing you to pass custom values to initialize an object's data members at the exact moment it is created.
//Instead of creating an empty object and calling multiple setter functions afterward, a parameterized constructor lets you set up the entire object in a single line.


// code 

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    // PARAMETERIZED CONSTRUCTOR (Accepts arguments)
    Student(string n, int g) {
        name = n;
        grade = g;
    }

    void display() const {
        cout << "Student: " << name << ", Grade: " << grade << endl;
    }
};

int main() {
    // Passing values directly when creating objects
    Student s1("Priya", 92);
    Student s2("Kabir", 85);

    s1.display(); // Output: Student: Priya, Grade: 92
    s2.display(); // Output: Student: Kabir, Grade: 85

    return 0;
}


