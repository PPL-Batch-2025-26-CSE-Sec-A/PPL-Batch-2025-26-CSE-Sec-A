#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    int roll,marks;
    string name;
    Student(int r, string n, int m){
        roll=r;
        name=n;
        marks=m;
    }
    Student(Student&stu){
        roll=stu.roll;
        name=stu.name;
        marks=stu.marks;
    }
};

int main() {
    Student s1(1,"Rohit",50);
    Student s1copy(s1);
    cout<<s1.roll<<" "<<s1.name<<" "<<s1.marks<<"\n";
    cout<<s1copy.roll<<" "<<s1copy.name<<" "<<s1copy.marks<<"\n";
    return 0;
}
