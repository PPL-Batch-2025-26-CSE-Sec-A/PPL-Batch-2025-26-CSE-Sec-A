#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    float marks;
public:
    Student(int stu_roll,string stu_name,float stu_marks){
        roll=stu_roll;
        name= stu_name;
        marks=stu_marks;
    }
    void display(){
        cout<<"Student's Roll is: "<<roll<<endl;
        cout<<"Student's Name is: "<<name<<endl;
        cout<<"Student's Name is: "<<marks<<endl;
    }
};

int main(){
    cout<<"Displaying the student's data:"<<endl;
    Student s1(38,"jas",99.1);
    s1.display();
    Student s2(s1);
    cout<<endl<<"Displaying the copied student's data:"<<endl;
    s2.display();
    return 0;
}
