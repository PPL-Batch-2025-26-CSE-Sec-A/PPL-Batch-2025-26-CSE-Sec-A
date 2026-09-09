#include<iostream>
using namespace std;
class Product
{
    int id;
    string name;
    float price;
public:
    Product(int i, string a, float b)
    {
        id=i;
        name=a;
        price=b;
    }
    Product(Product &p)
    {
        id=p.id;
        name=p.name;
        price=p.price;
    }
    void display()
    {
        cout<< "ID is " << id << endl;
        cout<< "Name is " << name << endl;
        cout<< "Price is " << price << endl;
    }
    void changePrice(float b)
    {
        price=b;
    }
};
int main()
{
    Product p1(101, "A", 10000);
    Product p2(p1);
    cout<< "Product before price change " << endl;
    p1.display();
    p2.changePrice(11000);
    cout<< "Product after price change " << endl;
    p2.display();
    return 0;
}
