#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is an EVEN number.";
    }else{
        cout<<n<<" is an ODD number.";
    }

    return 0;
}
