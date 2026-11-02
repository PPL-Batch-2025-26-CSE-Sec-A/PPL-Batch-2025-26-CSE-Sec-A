#include<iostream>
using namespace std;
class Vehicle{
public:
    virtual double calculateRent(int days)=0; //pure virtual func
    virtual void displayType(){ //normal virtual function
        cout<<"Vehicle";
    }

};

class Car:public Vehicle{
public:
    double calculateRent(int days) override{
        return days*2000;
    }
    void displayType()override{
        cout<<"Car";
    }
};

class Bike:public Vehicle{
public:
    double calculateRent(int days) override{
        return days*800;
    }
    void displayType()override{
        cout<<"Bike";
    }
};

class Truck:public Vehicle{
public:
    double calculateRent(int days) override{
        return days*5000+1000;
    }
    void displayType()override{
        cout<<"Truck";
    }
};

int main(){
    Car c1;
    Bike b1;
    Truck t1;

    Vehicle *ptr;//base class pointer

    //for car
    ptr=&c1;
    ptr->displayType();
    cout << " ---";
    cout << "\nRental Cost for 3 days: Rs. "<<ptr->calculateRent(3)<<endl;

    //for bike
    ptr=&b1;
    ptr->displayType();
    cout << " ---";
    cout << "\nRental Cost for 3 days: Rs. "<<ptr->calculateRent(3)<<endl;

    //for truck
    ptr=&t1;
    ptr->displayType();
    cout << " ---";
    cout << "\nRental Cost for 3 days: Rs. "<<ptr->calculateRent(3)<<endl;
    return 0;
}
