#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Eneter the number:";
	cin>>n;
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
		
		sum = sum+i;
	}
}

	if(sum==n){
		cout<<"The number is perfect:"<<n;
	}
	else{
		cout<<"The number is not perfect:"<<n;
	}
	
	
	return 0;
}
