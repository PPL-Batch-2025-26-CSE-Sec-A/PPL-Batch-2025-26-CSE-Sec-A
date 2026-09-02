#include <iostream>
using namespace std;

class Student
{
    int roll;
    int marks[5];

public:

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void totalMarks()
    {
        int total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        cout << "\nRoll Number = " << roll << endl;
        cout << "Total Marks = " << total;
    }
};

int main()
{
    Student s;

    s.getData();
    s.totalMarks();

    return 0;
}
