//Create a class Car with model and price. Use parameterized constructor to initialize them. Use a static variable totalCars to count how many Car objects are created. Also add a static function showTotal().

#include <iostream>
using namespace std;

class Car
{
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

    void display()
    {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    static void showTotal()
    {
        cout << "Total Cars Created: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main()
{
    Car c1("Toyota", 1500000);
    Car c2("Honda", 1200000);
    Car c3("BMW", 4500000);

    c1.display();
    cout << endl;

    c2.display();
    cout << endl;

    c3.display();
    cout << endl;

    Car::showTotal();

    return 0;
}