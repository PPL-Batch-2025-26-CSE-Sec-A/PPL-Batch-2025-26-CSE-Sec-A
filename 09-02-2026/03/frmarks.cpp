#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}

    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2) {
    cout << "--- Student Details ---" << endl;
    cout << "Name: " << s1.name << " | Marks: " << s1.marks << endl;
    cout << "Name: " << s2.name << " | Marks: " << s2.marks << endl;
    cout << "-----------------------" << endl;

    if (s1.marks > s2.marks) {
        cout << "Result: " << s1.name << " has the higher score (" << s1.marks << ")." << endl;
    } else if (s2.marks > s1.marks) {
        cout << "Result: " << s2.name << " has the higher score (" << s2.marks << ")." << endl;
    } else {
        cout << "Result: Both students scored equally (" << s1.marks << ")." << endl;
    }
}

int main() {
    Student student1("Adarsh", 85);
    Student student2("Arghya", 92);
    
    compareMarks(student1, student2);
    
    return 0;
}