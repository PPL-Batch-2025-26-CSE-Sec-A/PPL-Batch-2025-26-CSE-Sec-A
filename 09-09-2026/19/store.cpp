#include<iostream>
#include<string>
using namespace std;

class Product
{
    public:
        int id;
        string name;
        int price;
    Product(int i, string n, int p)
    {
        id=i;
        name=n;
        price=p;
    }
    Product(Product &other)
    {
        id=other.id;
        name=other.name;
        price=other.price + 100;
    }
    void display()
    {
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    Product p1(101,"Ishika",78);
    cout << "Original - \n";
    p1.display();
    cout << "\n";
    Product p2 = p1;
    cout << "Copied - \n";
    p2.display();
    return 0;
}