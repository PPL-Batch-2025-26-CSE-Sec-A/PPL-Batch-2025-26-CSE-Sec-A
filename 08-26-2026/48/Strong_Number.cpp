#include<iostream>
using namespace std;
int main(){
 int n,x,s=0;
 cin>>n;
 x=n;
 while(n>0){
  int d=n%10,f=1;
  for(int i=1;i<=d;i++) f=f*i;
  s=s+f;
  n=n/10;
 }
 if(s==x) cout<<"Strong";
 else cout<<"Not Strong";
 return 0;
}