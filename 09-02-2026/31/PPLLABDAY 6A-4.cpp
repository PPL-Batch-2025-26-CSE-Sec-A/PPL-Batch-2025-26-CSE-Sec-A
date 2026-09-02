#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        cout << s1.name << " has higher marks." << endl;
        cout << "Marks: " << s1.marks << endl;
    }
    else if (s2.marks > s1.marks)
    {
        cout << s2.name << " has higher marks." << endl;
        cout << "Marks: " << s2.marks << endl;
    }
    else
    {
        cout << "Both students have equal marks." << endl;
    }
}

int main()
{
    Student s1("Arpan", 85);
    Student s2("Rahul", 78);

    compareMarks(s1, s2);

    return 0;
}