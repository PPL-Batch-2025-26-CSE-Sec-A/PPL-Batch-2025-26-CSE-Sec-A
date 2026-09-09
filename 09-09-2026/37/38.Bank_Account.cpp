#include<iostream>
using namespace std;
class Bank
{
    string name;
    int balance;
public:
    Bank(string a, float b)
    {
        name=a;
        balance=b;
    }
    Bank(Bank &b1)
    {
        name=b1.name;
        balance=b1.balance;
    }
    void deposit(float amount)
    {
        balance=balance+amount;
    }
    void display()
    {
        cout<< "Account Holder " << name << endl;
        cout<< "Balance is " << balance << endl;
    }
};
int main()
{
    Bank b2("A", 9000);
    Bank b3(b2);
    cout<< "Original Account " << endl;
    b2.display();
    b3.deposit(1000);
    cout<< "Joint Account holder after deposit " << endl;
    b3.display();
    return 0;
}
