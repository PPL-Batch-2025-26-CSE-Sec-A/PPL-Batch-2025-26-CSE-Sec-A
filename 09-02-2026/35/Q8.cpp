#include<iostream>
using namespace std;
class car{
    string model;
    float price;
    static int totalcars;
    public:
    car(string m,float p){
        model=m;
        price=p;
        totalcars++;
    }
    void display(){
        cout<<"Model: "<<model<< endl;
        cout<<"Price: "<< price<< endl;
    }
    static void showTotal(){
        cout<<"Total Cars: "<<totalcars<<endl;
    }
};
int car::totalcars=0;
int main(){
    car c1("RE",250000);
    car c2("Yamaha m2",180000);
    car c3("Beneli",600000);
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    c3.display();
    cout<<endl;
    car::showTotal();
    return 0;
}

