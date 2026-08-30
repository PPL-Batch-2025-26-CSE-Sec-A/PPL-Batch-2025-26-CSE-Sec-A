#include <iostream>
using namespace std;

class Car {
    int id;
    float price;

public:
    void input() {
        cout << "Enter Car ID: ";
        cin >> id;

        cout << "Enter Car Price: ";
        cin >> price;
    }

    void display() {
        cout << "Car ID: " << id << endl;
        cout << "Car Price: " << price << endl;
    }
};

int main() {
    Car c[2];
    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details for Car " << i + 1 << endl;
        c[i].input();
    }


    cout << "\n--- Car Details ---\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nCar " << i + 1 << endl;
        c[i].display();
    }

    return 0;
}
