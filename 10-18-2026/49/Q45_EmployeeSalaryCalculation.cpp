#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
};

class PermanentEmployee : public Employee {
public:
    double basic;

    PermanentEmployee(double b) {
        basic = b;
    }

    double calculateSalary() {
        return basic + basic * 0.20 + basic * 0.10;
    }
};

class ContractEmployee : public Employee {
public:
    int hours;
    double rate;

    ContractEmployee(int h, double r) {
        hours = h;
        rate = r;
    }

    double calculateSalary() {
        return hours * rate;
    }
};

int main() {
    PermanentEmployee p(20000);
    ContractEmployee c(40, 200);

    Employee *e;

    e = &p;
    cout << "Permanent Salary = "
         << e->calculateSalary() << endl;

    e = &c;
    cout << "Contract Salary = "
         << e->calculateSalary() << endl;

    return 0;
}
