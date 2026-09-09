#include <iostream>
using namespace std;

class Car {
    string model;
    float price;
    static int totalCars;

public:
    Car(string m, float p) {
        model = m;
        price = p;
        totalCars++;
    }

    static void showTotal() {
        cout << "Total Cars: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main() {
    Car c1("BMW", 5000000);
    Car c2("Audi", 6000000);
    Car c3("Tesla", 7000000);

    Car::showTotal();

    return 0;
}
