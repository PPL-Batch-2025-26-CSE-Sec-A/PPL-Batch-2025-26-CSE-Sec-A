#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    if(a == 30 || b == 30 || (a + b) == 30){
        cout << "True";
    }
    else{
        cout << "False";
    }
}