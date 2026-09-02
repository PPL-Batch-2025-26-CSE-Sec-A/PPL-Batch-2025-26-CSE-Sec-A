#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number:";
cin>>n;
for(int i=1;i<=n/2;i++){
	if(n%i==0)
	cout<<"prime numbers:"<<i<<endl;
	else
	cout<<"not prime numbers:"<<i<<endl;
}	
	
	
	return 0;
}
