#include<iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    // Parameterized constructor
    Product(int i, string n, float p) {
        id = i;
        name = n;
        price = p;
    }

    // Copy constructor
    Product(Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    // Display function
    void display() {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }

    // Change price
    void changePrice(float p) {
        price = p;
    }
};

int main() {
    // Create original product
    Product p1(101, "Laptop", 50000);

    // Copy the product
    Product p2(p1);

    cout << "Copied Product Before Price Change:" << endl;
    p2.display();

    // Change price of copied product
    p2.changePrice(45000);

    cout << "\nCopied Product After Price Change:" << endl;
    p2.display();

    return 0;
}
