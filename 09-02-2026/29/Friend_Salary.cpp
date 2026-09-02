#include<iostream>
using namespace std;
class Employee{
int b,o;
public:
Employee(int x,int y){b=x;o=y;}
friend void total(Employee e);
};
void total(Employee e){
cout<<"Total Salary: "<<e.b+e.o;
}
int main(){
int a,b;
cout<<"Enter basic salary and bonus: ";
cin>>a>>b;
Employee e(a,b);
total(e);
}
