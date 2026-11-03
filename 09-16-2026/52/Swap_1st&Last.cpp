#include<iostream>
using namespace std;
int main(){
int n,first,last,p=1,temp;
cout<<"Enter a number: ";
cin>>n;
temp=n;
last=n%10;
while(temp>=10){
temp/=10;
p*=10;
}
first=temp;
n=n-first*p-last;
n=n+last*p+first;
cout<<"After swapping: "<<n;
return 0;
}