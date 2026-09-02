#include<iostream>
using namespace std;
class Car{
public:
string m;
int p;
static int t;
Car(string x,int y){m=x;p=y;t++;}
static void showTotal(){cout<<"Total Cars: "<<t;}
};
int Car::t=0;
int main(){
string x,y;
int a,b;
cout<<"Enter model and price: ";
cin>>x>>a;
Car c1(x,a);
cout<<"Enter model and price: ";
cin>>y>>b;
Car c2(y,b);
Car::showTotal();
}