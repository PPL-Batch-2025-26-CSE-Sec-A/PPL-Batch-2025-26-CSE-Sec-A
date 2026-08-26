#include <iostream>
using namespace std;
class Car
{
    int id;
    float price;
public:
    void input()
    {
        cout << "Enter car ID: ";
        cin >> id;
        cout << "Enter car price: ";
        cin >> price;
    }
    void display()
    {
        cout << "Car ID = " << id << endl;
        cout << "Car Price = " << price << endl;
    }
};
int main()
{
    Car c1, c2;
    cout << "Enter details of Car 1:\n";
    c1.input();
    cout << "\nEnter details of Car 2:\n";
    c2.input();
    cout << "\nDetails of Car 1:\n";
    c1.display();
    cout << "\nDetails of Car 2:\n";
    c2.display();
    return 0;
}