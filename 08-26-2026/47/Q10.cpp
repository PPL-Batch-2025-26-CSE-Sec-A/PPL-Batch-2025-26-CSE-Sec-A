//Create a class “Student”. Take user input for roll number and marks of 5 subjects of a student. Display the total marks of the student using member functions.

#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int marks[5];

public:

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        cout << "Roll Number = " << rollNo << endl;
        cout << "Total Marks = " << sum;
    }
};

int main()
{
    Student s;

    s.input();
    s.total();

    return 0;
}