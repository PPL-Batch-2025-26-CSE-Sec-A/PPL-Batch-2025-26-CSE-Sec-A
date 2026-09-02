#include<iostream>
using namespace std;
class Employee{
string n;
int s,id;
static int nextId;
public:
Employee(string x,int y){n=x;s=y;id=nextId++;}
void show(){cout<<"Employee ID: "<<id;}
};
int Employee::nextId=1001;
int main(){
string x,y;
int a,b;
cout<<"Enter name and salary: ";
cin>>x>>a;
Employee e1(x,a);
cout<<"Enter name and salary: ";
cin>>y>>b;
Employee e2(y,b);
e1.show();
cout<<" ";
e2.show();
}