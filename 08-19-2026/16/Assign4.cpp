#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cout<<"Enter the first number:"<<endl;
	cin>>a;
	cout<<"Enter the second number:"<<endl;
	cin>>b;
	cout<<"Enter the third number:"<<endl;
	cin>>c;
	if(a>b && a>c){
	
	cout<<"Largest number:"<<a;}
	else if(b>a && b>c){
	
	cout<<"Largest number:"<<b;}
	else
	{
		cout<<"Largest number:"<<c;
	}
	
	return 0;
}
