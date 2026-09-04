#include<iostream>
using namespace std;
class Car
{
    string model;
    float price;
    static int totalCars;
public:
    Car(string a, float p)
    {
        model=a;
        price=p;
        totalCars++;
    }
    static void showtotal()
    {
        cout<< "Total Cars " << totalCars <<endl;
    }
};
int Car::totalCars=0;
int main()
{
    Car c1("BMW", 5000000);
    Car c2("Audi", 1000000);
    Car c3("Brezza", 800000);
    Car::showtotal();
    return 0;
}
