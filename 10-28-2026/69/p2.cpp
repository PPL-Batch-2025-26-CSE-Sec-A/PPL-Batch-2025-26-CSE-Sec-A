#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual double calculateRent(int days) = 0;

    virtual void displayType() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    double calculateRent(int days) override {
        return days * 2000;
    }

    void displayType() override {
        cout << "Vehicle Type: Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    double calculateRent(int days) override {
        return days * 800;
    }

    void displayType() override {
        cout << "Vehicle Type: Bike" << endl;
    }
};

class Truck : public Vehicle {
public:
    double calculateRent(int days) override {
        return (days * 5000) + 1000;
    }

    void displayType() override {
        cout << "Vehicle Type: Truck" << endl;
    }
};

int main() {
    Car car;
    Bike bike;
    Truck truck;

    Vehicle *ptr;

    int days = 3;

    ptr = &car;
    ptr->displayType();
    cout << "Rental Cost: Rs. "
         << ptr->calculateRent(days) << endl;

    ptr = &bike;
    ptr->displayType();
    cout << "Rental Cost: Rs. "
         << ptr->calculateRent(days) << endl;

    ptr = &truck;
    ptr->displayType();
    cout << "Rental Cost: Rs. "
         << ptr->calculateRent(days) << endl;

    return 0;
}
