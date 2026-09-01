#include<iostream>
using namespace std;
int main(){
	
	int a;
	int b;
	cout<<"Enter the start number:";
	cin>>a;
	cout<<"enter the stop number:";
	cin>>b;
	for(int n=a;n<=b;n++){
	
	int sum=0;
	
	for(int i=1;i<n;i++){
		if(n%i==0){
		
		sum = sum+i;
	}
}


	if(sum==n){
		cout<<"The number is perfect:"<<n;
	}
	

}
	
	return 0;
}
