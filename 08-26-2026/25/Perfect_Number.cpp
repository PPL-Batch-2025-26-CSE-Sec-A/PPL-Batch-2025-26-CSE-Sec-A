#include<iostream>
using namespace std;
int main(){
 int n,s=0;
 cin>>n;
 for(int i=1;i<n;i++){
  if(n%i==0) s=s+i;
 }
 if(s==n) cout<<"Perfect";
 else cout<<"Not Perfect";
 return 0;
}