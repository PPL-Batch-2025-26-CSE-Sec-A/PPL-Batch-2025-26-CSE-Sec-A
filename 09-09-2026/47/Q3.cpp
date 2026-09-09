// An online store wants to create products with ID, name, price. For creating similar product variants, it wants to copy an existing product and just change the price.
// a) Create class Product with both constructors
// b) Display the ID, name and price of the copied object before and after changing the price.

#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;

public:

    // Parameterized Constructor
    Product(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }

    // Copy Constructor
    Product(Product &p)
    {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    // Function to change price
    void changePrice(float newPrice)
    {
        price = newPrice;
    }

    // Display function
    void display()
    {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }
};

int main()
{
    // Original product
    Product p1(101, "Laptop", 50000);

    // Copy product
    Product p2(p1);

    cout << "Copied Product Before Changing Price:" << endl;
    p2.display();

    // Change price of copied product
    p2.changePrice(55000);

    cout << "\nCopied Product After Changing Price:" << endl;
    p2.display();

    return 0;
}
