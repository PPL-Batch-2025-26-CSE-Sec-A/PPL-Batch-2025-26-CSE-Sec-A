#include<iostream>
using namespace std;
class BankAccount{
string a;
int b;
static int r;
public:
BankAccount(string x,int y){a=x;b=y;}
static void changeRate(int x){r=x;}
void show(){cout<<"Interest Rate: "<<r;}
};
int BankAccount::r=5;
int main(){
string x;
int y,z;
cout<<"Enter name and balance: ";
cin>>x>>y;
BankAccount b(x,y);
cout<<"Enter new interest rate: ";
cin>>z;
BankAccount::changeRate(z);
b.show();
}