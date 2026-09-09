#include<iostream>
using namespace std;
class BankAccount {
	private:
		string accountHolder;
		float balance;
		static float interestRate;
	public:
		BankAccount(string name, float bal){
			accountHolder = name;
			balance = bal;
		}
		static void changeInterestRate(float rate){
			interestRate = rate;
		}
		void display()
		{
			cout << "Account Holder:" << accountHolder << endl;
			cout << "Balance:" << balance << endl;
			cout << "Interset Rate:" << interestRate << endl;
		}
};
		float BankAccount :: interestRate = 5.0;
		int main(){
			BankAccount b1("Dippendu",50000);
			BankAccount b2("Priyanka",60000);
			cout << "Before Changing Interest Rate:" << endl;
			b1.display();
			cout << endl;
			b2.display();
			cout << endl;
			BankAccount :: changeInterestRate (7.5);
			cout << "\nAfter Changing Interst:" << endl;
			b1.display();
			cout << endl;
			b2.display();
			cout << endl;
			return 0;
			}

