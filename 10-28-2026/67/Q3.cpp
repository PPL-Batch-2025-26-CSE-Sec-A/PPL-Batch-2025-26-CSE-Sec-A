#include <iostream>
using namespace std;

int main()
{
    double balance, withdraw;

    cout<<"Enter Account balance: ";
    cin>>balance;

    cout<<"Enter an amount to Withdraw: ";
    cin>>withdraw;
    
    try
    {
        if(withdraw <= 0)
            throw invalid_argument("Invalid Withdrawal amount");
            
        if(withdraw > balance)
            throw runtime_error("Insufficient Balance!");

        balance -= withdraw;

        cout<<"Withdrawal succesfull"<<endl;
        cout<<"Updated Balance: "<<balance<<endl;
    }
    catch(const invalid_argument& e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }
    catch(const runtime_error& e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }

    return 0;
}