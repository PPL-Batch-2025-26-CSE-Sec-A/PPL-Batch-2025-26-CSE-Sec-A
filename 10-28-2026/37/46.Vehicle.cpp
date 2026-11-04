#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int calculateRent(int days)=0;
    virtual void displayType()
    {
        cout << "Vehicle ";
    }
};
class Car:public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days*2000;
    }
    void displayType()
    {
        cout<< endl << "Car Rent ";
    }
};
class Bike:public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days*800;
    }
    void displayType()
    {
        cout<< endl << "Bike Rent ";
    }
};
class Truck:public Vehicle
{
public:
    int calculateRent(int days)
    {
        return days*5000+1000;
    }
    void displayType()
    {
        cout<< endl << "Truck Rent ";
    }
};
int main()
{
    Car c;
    Bike b;
    Truck a;
    Vehicle *ptr;
    int days=3;
    ptr=&c;
    ptr->displayType();
    cout << ptr->calculateRent(days);
    ptr=&b;
    ptr->displayType();
    cout << ptr->calculateRent(days);
    ptr=&a;
    ptr->displayType();
    cout << ptr->calculateRent(days);
    return 0;
}

