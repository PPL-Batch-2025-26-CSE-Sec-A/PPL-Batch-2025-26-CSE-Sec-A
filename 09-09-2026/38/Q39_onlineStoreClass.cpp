#include<iostream>
using namespace std;
class Product{
    int id;
    string name;
    float price;
public:
    Product(int p_id,string p_name,float p_price){
        id=p_id;
        name=p_name;
        price=p_price;
    }
    void changePrice(float newPrice){
        price=newPrice;
    }
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    Product p1(1011,"laptop",70000);
    Product p2(p1); //copied object
    cout<<"Copied product beore changing price: "<<endl;
    p2.display();
    p2.changePrice(80000);
    cout<<endl<<"Copied product after changing price: "<<endl;
    p2.display();
    return 0;
}

