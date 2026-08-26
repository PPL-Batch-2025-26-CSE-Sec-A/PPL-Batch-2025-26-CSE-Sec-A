#include<iostream>
using namespace std;
int main(){
	int a,b=0,i,c=0;
	a=1,2,3,4,5,6,7,8,9;
	for(i=1;i<=a;i++){
		if(i%2==0){
			b++;
		}
		else{
			c++;
		}
	}
	cout<<"The numbers of even number is "<<b<<"\n The numbers of odd number is "<<c;
	return 0;
}
