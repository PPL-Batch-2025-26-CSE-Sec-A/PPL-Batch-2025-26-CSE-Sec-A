#include <iostream>
#include <string>
using namespace std;

class CompanyEmployee {
private:
    string name;
    double basicSalary;
    double bonus;

public:
    CompanyEmployee(string empName, double salary, double b) 
        : name(empName), basicSalary(salary), bonus(b) {}

    friend void calculateTotalSalary(CompanyEmployee e);
};

void calculateTotalSalary(CompanyEmployee e) {
    double total = e.basicSalary + e.bonus;
    cout << "Employee Name: " << e.name << endl;
    cout << "Basic Salary: $" << e.basicSalary << endl;
    cout << "Bonus: $" << e.bonus << endl;
    cout << "Total Salary: $" << total << endl;
}

int main() {
    CompanyEmployee emp("Arnab Ghorai", 50000, 5000);
    calculateTotalSalary(emp);
    return 0;
}