#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Parameterized constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Friend function declaration
    friend void compareMarks(Student s1, Student s2);
};

// Friend function definition
void compareMarks(Student s1, Student s2) {
    if (s1.marks > s2.marks) {
        cout << s1.name << " has higher marks: " << s1.marks;
    }
    else if (s2.marks > s1.marks) {
        cout << s2.name << " has higher marks: " << s2.marks;
    }
    else {
        cout << "Both students have equal marks: " << s1.marks;
    }
}

int main() {
    Student s1("Rahul", 85);
    Student s2("Sneha", 92);

    compareMarks(s1, s2);

    return 0;
}
