#include<iostream>
#include<string>
using namespace std;

class Student
{
    //class
    public: 
        int roll;
        string name;
        int marks;
    //parameterizd constructor
    Student(int r, string n, int m)
    {
        roll = r;
        name = n;
        marks = m;
    }
    //copy constructor 
    Student(Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }
    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101,"Ishika",95);
    cout << "Original - \n";
    s1.display();
    cout << "\n";
    Student s2 = s1;
    cout << "Copied - \n";
    s2.display();
    return 0;
}
