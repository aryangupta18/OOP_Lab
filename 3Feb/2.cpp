#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    // Constructor
    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Function to display data
    void display() {
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

// Function that takes object (pass by value)
void showStudent(Student s) {
    cout << "Inside function" << endl;
    s.display();
}

int main() {
    Student s1("Guddu");

    showStudent(s1);

    cout << "Back to main()" << endl;

    return 0;
}
