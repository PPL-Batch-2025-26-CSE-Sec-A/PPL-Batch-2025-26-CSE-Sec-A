#include<iostream>
using namespace std;
int  main(){
    int a,b,c;
    cout<<" Enter 1st Number :";
    cin>>a;
    cout<<" Enter 2nd Number :";
    cin>>b;
    cout<<" Enter 3rd Number :";
    cin>>c;
    if(a>b && a>c) cout<<" 1st number is the  largest number ";
    else if(b>a && b>c) cout<<" 2nd number  is the  largest number ";
    else cout<<" 3rd number is the  largest number ";
}