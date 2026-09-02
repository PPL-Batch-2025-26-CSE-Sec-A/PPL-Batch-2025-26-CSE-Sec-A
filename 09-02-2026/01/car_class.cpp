#include <iostream>
using namespace std;

class Car {
    string model;
    float price;

    static int totalCars;

public:
    // Parameterized Constructor
    Car(string m, float p) {
        model = m;
        price = p;

        totalCars++;   // Increase count whenever object is created
    }

    // Display car details
    void display() {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    // Static function
    static void showTotal() {
        cout << "Total Cars Created: " << totalCars << endl;
    }
};

// Initialize static variable
int Car::totalCars = 0;

int main() {
    Car car1("BMW", 5000000);
    Car car2("Audi", 4500000);
    Car car3("Mercedes", 6000000);

    car1.display();
    cout << endl;

    car2.display();
    cout << endl;

    car3.display();
    cout << endl;

    // Calling static function using class name
    Car::showTotal();

    return 0;
}
