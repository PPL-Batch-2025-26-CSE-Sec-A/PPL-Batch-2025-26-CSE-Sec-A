#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float salary;
    static float nextId;
public:
    Employee(string emp_name,float emp_salary){
        name= emp_name;
        salary= emp_salary;
        id=nextId++;
    }

    void display(){
        cout<<"ID: "<<id<<" , Name: "<<name<<" , Salary: "<<salary<<endl;
    }
};

float Employee::nextId=1001;

int main(){
    cout<<"----Bank Account Default interest----"<<endl;
    Employee e1("Jennie",50000);
    Employee e2("Jasmin",500000);
    Employee e3("jay",20000);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}


