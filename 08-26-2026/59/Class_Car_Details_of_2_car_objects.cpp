#include<iostream>
using namespace std;
class Car
{
    int id;
    float price;

public:
    void input()
    {
        cout<<"Enter ID and Price: ";
        cin>>id>>price;
    }
    void display()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
int main()
{
    Car c[2];
    for(int i=0;i<2;i++)
        c[i].input();
    for(int i=0;i<2;i++)
    {
        cout<<"\nCar "<<i+1<<endl;
        c[i].display();
    }
    return 0;
}
