#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    virtual double calculateRent(int days) = 0;

    virtual void displayType() {
        cout << "Vehicle Type";
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    double calculateRent(int days) override {
        return days * 2000;
    }

    void displayType() override {
        cout << "\nVehicle: Car";
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    double calculateRent(int days) override {
        return days * 800;
    }

    void displayType() override {
        cout << "\nVehicle: Bike";
    }
};

// Derived class Truck
class Truck : public Vehicle {
public:
    double calculateRent(int days) override {
        return (days * 5000) + 1000;
    }

    void displayType() override {
        cout << "\nVehicle: Truck";
    }
};

int main() {
    Car c;
    Bike b;
    Truck t;

    // Base class pointers
    Vehicle *ptr;

    ptr = &c;
    ptr->displayType();
    cout << "\nRental Cost for 3 days: Rs. "
         << ptr->calculateRent(3) << endl;

    ptr = &b;
    ptr->displayType();
    cout << "\nRental Cost for 3 days: Rs. "
         << ptr->calculateRent(3) << endl;

    ptr = &t;
    ptr->displayType();
    cout << "\nRental Cost for 3 days: Rs. "
         << ptr->calculateRent(3) << endl;

    return 0;
}