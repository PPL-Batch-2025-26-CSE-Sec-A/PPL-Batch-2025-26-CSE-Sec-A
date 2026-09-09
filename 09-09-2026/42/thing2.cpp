#include <iostream>
#include <string>
using namespace std;

class Bank{
    public:
    int bal;
    string accholder;
    Bank(string n, int b){
        accholder=n;
        bal=b;
    }
    Bank(Bank&b1){
        accholder=b1.accholder+"-Joint";
        bal=b1.bal;
    }
    void display(){
        cout<<"Account Holder: "<<accholder<<endl;
        cout<<"Balance: "<<bal<<endl;
    }
    void deposit(){
        int n;
        cout<<"enter amount to be deposited: ";
        cin>>n;
        bal+=n;
        cout<<"amount has been deposited\n";
    }
};

int main() {
    Bank b1("Rohit",5000);
    Bank b1j(b1);
    b1.display();
    b1j.display();
    b1j.deposit();
    b1j.display();
    return 0;
}
