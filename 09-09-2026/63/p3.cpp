#include <iostream>
#include <string>
using namespace std;

class Product {
    int id;
    string name;
    double price;
public:
    Product(int i, string n, double p) : id(i), name(n), price(p) {}
    
    Product(const Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
    }
    
    void changePrice(double newPrice) {
        price = newPrice;
    }
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    Product originalProduct(501, "Wireless Mouse", 25.99);
    Product variantProduct = originalProduct; 
    
    cout << "Copied Object (Before Price Change):" << endl;
    variantProduct.display();
    
    variantProduct.changePrice(19.99); 
    
    cout << "\nCopied Object (After Price Change):" << endl;
    variantProduct.display();
    
    return 0;
}