#include<iostream>#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        cout << "Student 1 has higher marks." << endl;
        cout << "Marks: " << s1.marks << endl;
    }
    else if (s2.marks > s1.marks)
    {
        cout << "Student 2 has higher marks." << endl;
        cout << "Marks: " << s2.marks << endl;
    }
    else
    {
        cout << "Both students have equal marks." << endl;
    }
}

int main()
{
    Student s1(85);
    Student s2(79);

    compareMarks(s1, s2);

    return 0;
}
 
