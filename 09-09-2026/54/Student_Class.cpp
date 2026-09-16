#include<iostream>
using namespace std;

class Student{
    int r,m;
    string n;
public:
    Student(int x,string y,int z){r=x;n=y;m=z;}
    Student(Student &s){r=s.r;n=s.n;m=s.m;}
    void show(){cout<<"The student has roll number "<<r<<", name "<<n<<" and marks "<<m<<".\n";}
};

int main(){
    int r,m;
    string n;
    cout<<"Enter roll number: ";
    cin>>r;
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter marks: ";
    cin>>m;
    Student s1(r,n,m);
    Student s2(s1);
    cout<<"The original student record is:\n";
    s1.show();
    cout<<"The copied student record is:\n";
    s2.show();
}
