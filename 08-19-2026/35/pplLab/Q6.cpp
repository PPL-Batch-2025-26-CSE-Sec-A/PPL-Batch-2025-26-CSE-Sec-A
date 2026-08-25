#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter two number :";
	cin>>n1>>n2;
	n3=n1+n2;
	cout<<"sum is: "<<n3;
	cout<<endl;
	if(n1==30||n2==30||n3==30){
		cout<<"True";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}
