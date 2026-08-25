#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n > 51){
        int a = n - 51;
        cout << "Triple the difference is: " << a * 3;
    }
    else{
        int a = 51 - n;
        cout << "Absolute difference is: " << a;
    }
}