#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;

    if(a + b == c || a + c == b || b + c == a){
        cout << "True";
    }
    else{
        cout << "False";
    }
}
