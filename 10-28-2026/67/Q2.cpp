#include <iostream>
using namespace std;

class Vehicle
{
    public:
        virtual double calculateRent(int days) = 0;

        virtual void displayType() = 0;
};

class Car : public Vehicle
{
    public:
        double calculateRent(int days) override
        {
            return days * 2000;
        }
        
        void displayType() override
        {
            cout<<"Vehicle Type: Car";
        }
};

class Bike : public Vehicle
{
    public:
        double calculateRent(int days) override
        {
            return days * 800;
        }
        
        void displayType() override
        {
            cout<<"Vehicle Type: Bike";
        }
};

class Truck : public Vehicle
{
    public:
        double calculateRent(int days) override
        {
            return (days * 5000) + 1000;
        }
        
        void displayType() override
        {
            cout<<"Vehicle Type: Truck";
        }
};

int main()
{
    Car c;
    Bike b;
    Truck t;

    Vehicle *v;

    int days;
    cout<<"Enter number of days: ";
    cin>>days;

    v = &c;
    v->displayType();
    cout<<endl;
    cout<<"Total Rent: "<<v->calculateRent(days)<<endl;

    cout<<endl;

    v = &b;
    v->displayType();
    cout<<endl;
    cout<<"Total Rent: "<<v->calculateRent(days)<<endl;

    cout<<endl;

    v = &t;
    v->displayType();
    cout<<endl;
    cout<<"Total Rent: "<<v->calculateRent(days)<<endl;

    return 0;
}