//Class and Object

//n Object-Oriented Programming (OOP), a class is a blueprint or template, while an object is a specific, usable instance created from that blueprint


//• Class (The Blueprint). Defines the structure and rules for what an entity will have. It groups attributes (variables that hold data, like color or model) and methods (functions that define behavior, like drive() or brake()) into a single unit. A class does not take up memory for data until an object is made from it.


//• Object (The Instance). A real, working entity built using the class. You can create many objects from a single class, and each one holds its own independent data and takes up space in memory


// CODE

#include <iostream>
#include <string>
using namespace std;

// 1. Define the Class (Blueprint)
class Car {
public:                 // Access specifier (allows access from outside the class)
    string brand;       // Attribute (Data member)
    string color;       // Attribute (Data member)

    void honk() {       // Method (Member function)
        cout << "The " << color << " " << brand << " goes beep!" << endl;
    }
}; // <-- Don't forget this semicolon in C++!

int main() {
    // 2. Create Objects (Instances)
    Car car1;
    car1.brand = "Toyota";
    car1.color = "Red";

    Car car2;
    car2.brand = "Honda";
    car2.color = "Blue";

    // 3. Use the Objects
    car1.honk();  // Output: The Red Toyota goes beep!
    car2.honk();  // Output: The Blue Honda goes beep!

    return 0;
}
