#include<iostream>
using namespace std;
class Car{
    static int count;
    string model;
    float price;
public:
    Car(string carModel,float carPrice){
        model= carModel;
        price= carPrice;
        count++;
    }
    static void showTotal(){
        cout<<count;
    }
};

int Car::count=0;

int main(){
    Car c1("Nissan GTR",1000000);
    Car c2("BMW",2000000);
    Car::showTotal();
    return 0;
}

