#include<iostream>
using namespace std;
class Car
{
    string model;
    int price;
    static int totalCars;
public:
    Car(string m,int p)
    {
        model=m;
        price=p;
        totalCars++;
    }
    void display()
    {
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
    }
    static void showTotal()
    {
        cout<<"Total Cars: "<<totalCars<<endl;
    }
};
int Car::totalCars=0;
int main()
{
    Car c1("BMW",5000000);
    Car c2("Audi",6000000);
    c1.display();
    c2.display();
    Car::showTotal();
    return 0;
}
