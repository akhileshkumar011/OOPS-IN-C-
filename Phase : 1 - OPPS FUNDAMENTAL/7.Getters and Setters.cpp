//Getters and Setters

//In C++, getters and setters are public member functions used to safely read (get) and modify (set) private data members of a class.
//They act as controlled doors into your class: instead of leaving variables open for anyone to overwrite with invalid data, getters and setters let you manage how values are retrieved and updated.

//How They Work

//• Getter (Accessor): Returns the value of a private variable. By convention, its name starts with get (e.g., getAge()). It does not change any data, so in good C++ practice, it is marked with const.
//• Setter (Mutator): Takes a parameter and assigns it to a private variable, usually after checking that the input is valid. By convention, its name starts with set (e.g., setAge(int a)).



// Example

#include <iostream>
using namespace std;

class Person {
private:
    int age; // Private data member

public:
    // SETTER: Validates input before updating 'age'
    void setAge(int a) {
        if (a >= 0 && a <= 120) {
            age = a;
        } else {
            cout << "Invalid age! Setting default to 0." << endl;
            age = 0;
        }
    }

    // GETTER: Safely returns 'age' ('const' promises not to modify any data)
    int getAge() const {
        return age;
    }
};

int main() {
    Person p;

    p.setAge(25);                       // Valid input
    cout << p.getAge() << endl;         // Output: 25

    p.setAge(-10);                      // Invalid input caught by setter
    cout << p.getAge() << endl;         // Output: 0

    return 0;
}

