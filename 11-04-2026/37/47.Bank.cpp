#include<iostream>
using namespace std;
int main()
{
    float balance,amount;
    cout<< "Enter account balance ";
    cin>>balance;
    cout<< "Enter withdrawl amount ";
    cin>>amount;
    try
    {
        if(amount<=0)
        {
            throw 1;
        }
        else if(amount>balance)
        {
            throw 2;
        }
        else
        {
            balance=balance-amount;
            cout<< "Withdrawl Successful " << endl;
            cout<< "Updated Balance is " << balance;
        }
    }
    catch(int a)
    {
        if(a==1)
        {
            cout<< "Invalid withdrawl amount ";
        }
        else if(a==2)
        {
            cout<< "Insufficient balance ";
        }
    }
    return 0;
}
