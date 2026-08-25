#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st number :";
	cin>>a;
	cout<<"Enter 2nd number :";
	cin>>b;
	cout<<"Enter 3rd number :";
	cin>>c;
	if(a<b){
		if(c<b){
			cout<<b<<" 2nd number is the largest number";
		}
		else{
			cout<<c<<" 3nd number is the largest number"<<c;
		}
	}
	else{
		cout<<a<<" 1st number is the largest number"<<a;
	}
}