#include<iostream>
using namespace std;
int main()
{
	int n,result,c=51;
	cout<<"Enter the number n =";
	cin>>n;
	if(c<n){
		result=(n - c)*3;
		cout<<"result= "<<result;
	}
	else{
		cout<<"n is not gater then 51";
	}
	return 0;
}
