#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,hypo;
    cout<<"Enter value of side a: ";
    cin>>a;
    cout<<"Enter value of side b: ";
    cin>>b;
    cout<<"Enter value of side c: ";
    cin>>c;
    if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(b,2)+pow(c,2)==pow(a,2)){
       cout<<"Yes it forms a rigth angle triangle";
    }else{
        cout<<"No it does not forms a right angle triangle";
    }
    return 0;
}
