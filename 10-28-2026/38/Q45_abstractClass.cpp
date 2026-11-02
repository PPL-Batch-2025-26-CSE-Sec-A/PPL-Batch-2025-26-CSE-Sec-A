#include<iostream>
using namespace std;
class Employee{
protected:
    int employeeId;
    string name;
public:
    Employee(int id,string n){
        employeeId=id;
        name=n;
    }
    //pure virtual function
    virtual double calculateSalary()=0;

    void displayDetails(){
        cout<<"\nEmployee ID: "<<employeeId;
        cout<<"\nEmployee Name: "<<name;
    }
};

//derived classes
class PermanentEmployee:public Employee{
private:
    double basicSalary;
public:
    PermanentEmployee(int id,string n,double sal):Employee(id,n){
        basicSalary=sal;
    }

    double calculateSalary() override{
        double hra=basicSalary*0.20;
        double da=basicSalary*0.10;
        return basicSalary+hra+da;
    }
};

class ContractEmployee:public Employee{
private:
    double hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(int id,string n,double hours,double rate):Employee(id,n){
        hoursWorked=hours;
        hourlyRate=rate;
    }

    double calculateSalary() override{
        return hoursWorked*hourlyRate;
    }
};

int main(){
    PermanentEmployee p1(101,"jassie",90000);
    ContractEmployee c1(107,"mizi",120,400);
    Employee *ptr; //cant declare object but can create a pointer that stores mem. addr. of employee type object

    ptr=&p1; //passing memeory addr. of object of class PermanentEmployee
    cout <<"\n--- Permanent Employee ---";
    ptr->displayDetails();
    cout << "\nSalary: Rs. "<<ptr->calculateSalary()<<endl;

    ptr=&c1;//contract Employee
    cout << "\n--- Contract Employee ---";
    ptr->displayDetails();
    cout << "\nSalary: Rs. "<<ptr->calculateSalary();
    return 0;
}
