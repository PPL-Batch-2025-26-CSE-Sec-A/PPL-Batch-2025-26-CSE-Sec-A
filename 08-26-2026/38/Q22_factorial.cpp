#include<iostream>
int main(){
    using namespace std;
    int n,i,fact=1;
    cout<<"Enter number to check factorial: ";
    cin>>n;
    for(i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial is: "<<fact;
    return 0;
}


