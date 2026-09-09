#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;

public:
    
    Product(int i, string n, double p) {
        id = i;
        name = n;
        price = p;
    }


    Product(const Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    
    void changePrice(double newPrice) {
        price = newPrice;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 60000);

    Product p2 = p1;

    cout << "Copied Product Before Price Change:" << endl;
    p2.display();


    p2.changePrice(70000);

    cout << "\nCopied Product After Price Change:" << endl;
    p2.display();

    return 0;
}