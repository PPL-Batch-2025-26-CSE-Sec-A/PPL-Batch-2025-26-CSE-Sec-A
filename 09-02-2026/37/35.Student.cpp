#include<iostream>
using namespace std;
class Student
{
    string name;
    int marks;
public:
    Student(string a, int b)
    {
        name=a;
        marks=b;
    }
    friend void compare(Student s1, Student s2);
};
void compare(Student s1, Student s2)
{
    if(s1.marks>s2.marks)
    {
        cout<< s1.name << " has higher marks "<< endl;
    }
    else if(s2.marks>s1.marks)
    {
        cout<< s2.name << " has higher marks "<< endl;
    }
    else
    {
        cout << " Both students have same marks "<< endl;
    }
}
int main()
{
    Student s1("A", 91);
    Student s2("B", 89);
    compare(s1,s2);
    return 0;
}
