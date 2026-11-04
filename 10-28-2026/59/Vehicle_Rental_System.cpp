#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual int calculateRent(int days) = 0;
};

class Car : public Vehicle {
public:
    int calculateRent(int days) {
        return days * 2000;
    }
};

class Bike : public Vehicle {
public:
    int calculateRent(int days) {
        return days * 800;
    }
};

int main() {
    Car c;
    Bike b;

    Vehicle *v;

    v = &c;
    cout << "Car Rent = Rs. "
         << v->calculateRent(3) << endl;

    v = &b;
    cout << "Bike Rent = Rs. "
         << v->calculateRent(3) << endl;

    return 0;
}
