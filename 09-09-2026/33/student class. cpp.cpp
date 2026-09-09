#include<iostream>
using namespace std;

class Account{
    string n;
    float b;
public:
    Account(string x,float y){n=x;b=y;}
    Account(Account &a){n=a.n;b=a.b;}
    void deposit(float x){b+=x;}
    void show(){cout<<"The account holder is "<<n<<" and the balance is "<<b<<".\n";}
};

int main(){
    string n;
    float b,d;
    cout<<"Enter account holder name: ";
    cin>>n;
    cout<<"Enter balance: ";
    cin>>b;
    Account a1(n,b);
    Account a2(a1);
    cout<<"The original account has:\n";
    a1.show();
    cout<<"Enter deposit amount for joint account: ";
    cin>>d;
    a2.deposit(d);
    cout<<"The joint account after deposit has:\n";
    a2.show();
}