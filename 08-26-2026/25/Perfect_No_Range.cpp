#include<iostream>
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
 for(int n=a;n<=b;n++){
  int s=0;
  for(int i=1;i<n;i++){
   if(n%i==0) s=s+i;
  }
  if(s==n) cout<<n<<" ";
 }
 return 0;
}