#include<iostream>
using namespace std;
int main(){
	int n1,n2,lastnum1,lastnum2;
	cout<<"Enter two number ";
	cin>>n1>>n2;
	lastnum1=n1%10;
	lastnum2=n2%10;
	if(lastnum1==lastnum2){
		cout<<"True";
	}
	else{
		cout<<"Wrong";
	}
	return 0;
}
