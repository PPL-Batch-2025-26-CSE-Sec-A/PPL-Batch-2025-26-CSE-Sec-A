#include<iostream>
using namespace std;
class Product
{
    int id;
    string name;
    float price;
public:
    Product(int i,string n,float p)
    {
        id=i;
        name=n;
        price=p;
    }
    Product(Product &p)
    {
        id=p.id;
        name=p.name;
        price=p.price;
    }
    void changePrice(float newPrice)
    {
        price=newPrice;
    }
    void display()
    {
        cout<<"Product ID: "<<id<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    Product p1(101,"Laptop",50000);
    Product p2(p1);
    cout << "Copied Product Before Changing Price:" << endl;
    p2.display();
    p2.changePrice(55000);
    cout<<"\nCopied Product After Changing Price:"<<endl;
    p2.display();
    return 0;
}
