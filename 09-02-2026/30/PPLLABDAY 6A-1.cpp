#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    float price;
    static int totalCars;

public:
    Car(string m, float p)
    {
        model = m;
        price = p;
        totalCars++;
    }

    static void showTotal()
    {
        cout << "Total Cars Created: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main()
{
    Car c1("BMW", 5000000);
    Car c2("Audi", 4500000);
    Car c3("Toyota", 2500000);

    Car::showTotal();

    return 0;
}