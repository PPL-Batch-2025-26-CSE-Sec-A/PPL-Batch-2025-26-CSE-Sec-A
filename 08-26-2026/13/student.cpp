#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    int marks[5];

public:
    Student(int roll) {
        rollNumber = roll;
    }

    void inputMarks() {
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int calculateTotal() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
    }
};

int main() {
    int roll;
    cout << "Enter roll number: ";
    cin >> roll;

    Student student(roll);
    student.inputMarks();
    student.displayDetails();

    return 0;
}