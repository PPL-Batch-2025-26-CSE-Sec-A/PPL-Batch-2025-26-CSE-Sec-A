#include <iostream>
using namespace std;

class Car {
private:
    int id;
    double price;

public:
    Car(int i, double p) {
        id = i;
        price = p;
    }

    void displayDetails() {
        cout << "Car ID: " << id << ", Price: $" << price << endl;
    }
};

int main() {
    Car car1(1, 25000.0);
    Car car2(2, 30000.0);

    cout << "Car Details:" << endl;
    car1.displayDetails();
    car2.displayDetails();

    return 0;
}
