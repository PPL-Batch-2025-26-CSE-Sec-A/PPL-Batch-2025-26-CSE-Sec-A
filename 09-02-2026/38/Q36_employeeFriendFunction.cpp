#include <iostream>
using namespace std;
class Employee{
    float basicSalary;
    float bonus;
public:
    Employee(float basic, float b){
        basicSalary = basic;
        bonus = b;
    }
    friend void calculateSalary(Employee e);
};

void calculateSalary(Employee e){
    float totalSalary;
    totalSalary = e.basicSalary + e.bonus;
    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main(){
    Employee e(80800, 20000);
    calculateSalary(e);
    return 0;
}
