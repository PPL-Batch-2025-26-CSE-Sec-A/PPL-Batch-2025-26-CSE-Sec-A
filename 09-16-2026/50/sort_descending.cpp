#include<iostream>
using namespace std;
int main()
{
	int a[7],temp;
	cout<<"Enter 7 number: ";
	for(int i=0;i<7;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6-i;j++)
		{
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Number in descending order: ";
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
}
