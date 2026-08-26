#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	if(n>51){
		cout<<"Triple difference:"<<n-51;
	}
	else{
		cout<<"difference:"<<51-n;
	}
	return 0;
	
}
