#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter number n= ";
    cin>>n;
    //using ternary operator
    int absoluteDiff=(n<51)?51-n:(n-51)*3;
    cout<<"The absolute difference is: "<<absoluteDiff;
    return 0;
}
