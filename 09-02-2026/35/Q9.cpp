#include<iostream>
using namespace std;
class BankAccount{
	string accountHolder;
	float balance;
	
	static float interestRate;
	public:
		BankAccount(string name,float bal){
			accountHolder=name;
			balance=bal;
		}
		void display(){
			cout<<"Account Holder: "<<accountHolder<<endl;
			cout<<"Balance"<<balance<<endl;
			cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
		}
		static void changeInterestRate(float newRate){
			interestRate=newRate;
		}
};
float BankAccount::interestRate=5.0;
int main(){
	string name1,name2;
	float balance1,balance2;
	float newRate;
	cout<<"Enter the Account Holder1: "<<endl;
	cin>>name1;
	cout<<"Enter Balance1: "<<endl;
	cin>>balance1;
	cout<<"Enter the Account Holder2: "<<endl;
	cin>>name2;
	cout<<"Enter Balance 2: "<<endl;
	cin>>balance2;
	BankAccount a1(name1,balance1);
	BankAccount a2(name2,balance2);
	cout<<"\n---Account details---"<<endl;
	a1.display();
	cout<<endl;
	a2.display();
	cout<<"\nEnter new interest rste: ";
	cin>>newRate;
	BankAccount::changeInterestRate(newRate);
	cout<<"\n---after Changing INterest Rate---"<<endl;
	a1.display();
	cout<<endl;
	a2.display();
	return 0;
	
	
}
