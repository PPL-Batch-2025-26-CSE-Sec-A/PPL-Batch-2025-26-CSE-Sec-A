#include <iostream>
using namespace std;

class Student {
    int roll;
    int marks[5];

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter marks of 5 subjects: ";

        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    int totalMarks() {
        int total = 0;

        for (int i = 0; i < 5; i++) {
            total = total + marks[i];
        }

        return total;
    }

    void display() {
        cout << "Roll Number = " << roll << endl;
        cout << "Total Marks = " << totalMarks() << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}