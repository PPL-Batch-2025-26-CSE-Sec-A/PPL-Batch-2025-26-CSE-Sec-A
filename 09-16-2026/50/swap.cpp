#include<iostream>
using namespace std;
int main()
{
	int n,f,l,d,m,r;
	cout<<"Enter a number: ";
	cin>>n;
	l=n%10;
	d=1;
	int temp=n;
	while(temp>=10)
	{
		temp=temp/10;
		d=d*10;
	}
	f=temp;
	m=(n%d)/10;
	r=l*d+m*10+f;
	cout<<"Number after swapping first and last digits: "<<r;
	return 0;
}
