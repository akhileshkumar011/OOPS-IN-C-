// Constructor overloading

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    // 1. Default Constructor (0 arguments)
    Book() {
        title = "Untitled";
        pages = 0;
    }

    // 2. Parameterized Constructor (1 argument)
    Book(string t) {
        title = t;
        pages = 100; // Default page count when only title is given
    }

    // 3. Parameterized Constructor (2 arguments)
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1;                          // Calls constructor 1
    Book b2("C++ Basics");            // Calls constructor 2
    Book b3("Mastering OOP", 450);    // Calls constructor 3

    b1.display(); // Output: Title: Untitled, Pages: 0
    b2.display(); // Output: Title: C++ Basics, Pages: 100
    b3.display(); // Output: Title: Mastering OOP, Pages: 450

    return 0;
}



// Shortcut

// Style A: Normal assignment inside { } (what you already know)
//Book(string t = "Untitled", int p = 0) {
//    title = t;
//    pages = p;
//}

// Style B: Member Initializer List (the shortcut)
//Book(string t = "Untitled", int p = 0) : title(t), pages(p) {
    // Nothing left to do inside the braces!
//}
