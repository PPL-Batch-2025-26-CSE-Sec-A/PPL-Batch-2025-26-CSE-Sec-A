
#include<iostream>
using namespace std;

class InvalidMarksException{};

int main(){
    float a,b,c,p;
    cout<<"Enter marks: ";
    cin>>a>>b>>c;

    try{
        if(a<0||a>100||b<0||b>100||c<0||c>100)
            throw InvalidMarksException();

        p=(a+b+c)/3;
        cout<<"Percentage: "<<p<<"%\n";

        if(p>=75) cout<<"Distinction";
        else if(p>=60) cout<<"First Class";
        else if(p>=40) cout<<"Pass";
        else cout<<"Fail";
    }
    catch(InvalidMarksException){
        cout<<"Invalid Marks!";
    }

    return 0;
}

