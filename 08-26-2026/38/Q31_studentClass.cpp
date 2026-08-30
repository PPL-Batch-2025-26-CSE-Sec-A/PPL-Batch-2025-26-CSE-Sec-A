#include <iostream>
using namespace std;

class Student {
    int rollNo;
    int marks[5];

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayTotal() {
        int total = 0;

        for (int i = 0; i < 5; i++) {
            total = total + marks[i];
        }

        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.displayTotal();

    return 0;
}
