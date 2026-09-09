#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
    static int ID;
    int price;
    string name;
    Product(int id, string n, int b){
        name=n;
        price=b;
        ID++;
    }
    Product(Product&b1){
        name=b1.name+"-var";
        price=b1.price;
        ID++;
    }
    void display(){
        cout<<"ID: "<<ID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void newprice(){
        int n;
        cout<<"enter new price: ";
        cin>>n;
        price=n;
        cout<<"price has been changed\n";
    }
};
int Product::ID=0;

int main() {
    Product p1(1,"Shampoo",5000);
    Product p1v(p1);
    p1.display();
    p1v.display();
    p1v.newprice();
    p1v.display();
    return 0;
}
