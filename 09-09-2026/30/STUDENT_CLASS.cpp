#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, "Arpan", 85.5);

    cout << "Original Student:" << endl;
    s1.display();

    Student s2(s1);

    cout << "\nCopied Student:" << endl;
    s2.display();

    return 0;
}