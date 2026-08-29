#include<iostream>
using namespace std;
class Car
{
private:
    int id;
    float price;
public:
    void setDetails(int a,float p)
    {
        id=a;
        price=p;
    }
    void display()
    {
        cout << "Car ID is " << id << endl;
        cout << "Car Price is " << price << endl;
    }
};
int main()
{
    Car c1,c2;
    int id1,id2;
    float price1,price2;
    cout<<"Enter Car 1 ID and Price" ;
    cin>>id1;
    cin>>price1;
    cout<<"Enter Car 2 ID and Price ";
    cin>>id2;
    cin>>price2;
    c1.setDetails(id1,price1);
    c2.setDetails(id2,price2);
    cout<< "Details of Car 1 is " << endl;
    c1.display();
    cout<< "Details of Car 2 is " << endl;
    c2.display();
    return 0;
}
