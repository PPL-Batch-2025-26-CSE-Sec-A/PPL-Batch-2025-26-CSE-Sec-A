#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    // Parameterized constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    // Display student details
    void show() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create original student using parameterized constructor
    Student s1(101, "Rahul", 85.5);

    // Create duplicate student using copy constructor
    Student s2(s1);

    cout << "Original Student:" << endl;
    s1.show();

    cout << "\nBackup Student:" << endl;
    s2.show();

    return 0;
}
