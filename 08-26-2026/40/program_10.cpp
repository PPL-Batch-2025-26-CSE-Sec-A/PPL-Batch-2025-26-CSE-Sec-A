#include <iostream>
using namespace std;
class Student
{
    int roll;
    int marks[5];
public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of 5 subjects:\n";
        for(int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void total()
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum = sum + marks[i];
        cout << "Roll Number = " << roll << endl;
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