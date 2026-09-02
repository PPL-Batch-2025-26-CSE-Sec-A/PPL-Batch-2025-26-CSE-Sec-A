#include<iostream>
using namespace std;
class Employee{
	string name;
	float salary;
	int id;
	static int nextId;
	public:
		Employee(string n,float s){
			name=n;
			salary=s;
			id=nextId;
			nextId++;
		}
		void display(){
			cout<<"Employee ID: "<<id<<endl;
			cout<<"Employee Name: "<<name<<endl;
			cout<<"Salary: "<< salary<<endl;
		}
		
};
int Employee::nextId=1001;
int main(){
	string name;
	float salary;
	cout<<"Enter Employee1 Name: ";
	cin>>name;
	cout<<"Enter Employee1 Salary: ";
	cin>>salary;
	Employee e1(name,salary);
	cout<<"\nEnter Employee2 Name: ";
	cin>>name;
    cout<<"Enter Employee2 Salary: ";
	cin>>salary;
	Employee e2(name,salary);
	cout<<"\n---Employee Details---"<<endl;
	e1.display();
	cout<<endl;
	e2.display();
	return 0;
}
