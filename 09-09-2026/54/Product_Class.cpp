#include<iostream>
using namespace std;

class Product{
    int i;
    string n;
    float p;
public:
    Product(int x,string y,float z){i=x;n=y;p=z;}
    Product(Product &a){i=a.i;n=a.n;p=a.p;}
    void change(float x){p=x;}
    void show(){cout<<"The product has ID "<<i<<", name "<<n<<" and price "<<p<<".\n";}
};

int main(){
    int i;
    string n;
    float p,q;
    cout<<"Enter product ID: ";
    cin>>i;
    cout<<"Enter product name: ";
    cin>>n;
    cout<<"Enter product price: ";
    cin>>p;
    Product p1(i,n,p);
    Product p2(p1);
    cout<<"The copied product before changing the price is:\n";
    p2.show();
    cout<<"Enter new price: ";
    cin>>q;
    p2.change(q);
    cout<<"The copied product after changing the price is:\n";
    p2.show();
}
