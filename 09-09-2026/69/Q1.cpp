//An exam department in a college wants to store student data. They want to create student object directly with marks, and also create a duplicate record for backup using copy.
// a) Create a class Student with roll, name, and marks
// b) Use parameterized constructor to initialize the data
// c) Use Copy constructor to clone a student

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

    Student(Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }
};

int main() {
    int r;
    string n;
    float m;

    cout << "Enter roll:";
    cin >> r ;
    cout << "Enter name:";
    cin >> n;
    cout << "Enter marks:";
    cin >> m;

    Student s1(r, n, m);
    Student s2(s1);

    cout << "Original: ";
    s1.display();

    cout << "Copied: ";
    s2.display();

    return 0;
}