#include<iostream>
#include<string>
using namespace std;

class Bank
{
    public:
        int acc_no;
        string acc_name;
        int balance;
    Bank(int no, string name, int b)
    {
        acc_no = no;
        acc_name = name;
        balance = b;
    }
    Bank(Bank &other)
    {
        acc_no = other.acc_no;
        acc_name=other.acc_name;
        balance=other.balance;
    }
    void deposit(int n)
    {
        balance = balance + n;
        
    }
    void display()
    {
        cout << "Account number - " << acc_no << endl;
        cout << "Account name - " << acc_name << endl;
        cout << "Amount - " << balance << endl;
    }
};

int main()
{
    Bank account1(219837,"Akansha",5000);
    cout << "Original Account - " << endl;
    account1.display();
    Bank account2 = account1;
    cout << "Joint account - " << endl;
    account2.display();
    cout << "Enter an amount to be deposited : " << endl;
    int amount;
    cin >> amount;
    account2.deposit(amount);
    cout << "After deposit in joint account - " << endl;
    account2.display();
    cout << "Original account after depositing in joint account - " << endl;
    account1.display();
    return 0;
}
