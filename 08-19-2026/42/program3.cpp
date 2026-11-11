#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the first number:"<<endl;
	cin>>a;
	cout<<"Enter the second number:"<<endl;
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping:"<<endl;
	cout<<"a:"<<a;
	cout<<"b:"<<b;
	
}