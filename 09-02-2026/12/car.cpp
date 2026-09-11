#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    double price;
    static int totalCars;

public:
    Car(string m, double p) : model(m), price(p) {
        totalCars++;
    }
    
    void display() {
        cout << "Model: " << model << " | Price: $" << price << endl;
    }

    static void showTotal() {
        cout << "Total cars created: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main() {
    Car c1("Toyota", 25000);
    Car c2("Honda", 22000);

    c1.display();
    c2.display();

    Car::showTotal();
    
    return 0;
}