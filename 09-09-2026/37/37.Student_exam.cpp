#include<iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    float marks;
public:
    Student(int r, string a, float b)
    {
        roll=r;
        name=a;
        marks=b;
    }
    Student(Student &s)
    {
        roll=s.roll;
        name=s.name;
        marks=s.marks;
    }
    void display()
    {
        cout<< "Roll no is " << roll << endl;
        cout<< "Name is " << name << endl;
        cout<< "Markis is " << marks << endl;
    }
};
int main()
{
    Student s1(101, "A", 90);
    Student s2(s1);
    cout<< "Student is " << endl;
    s1.display();
    cout<< "Copied Student is " << endl;
    s2.display();
    return 0;
}
