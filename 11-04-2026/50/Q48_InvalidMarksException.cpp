#include<iostream>
using namespace std;
class InvalidMarksException{ //exception class
public:
    void displayMessage(){
        cout<<"Invalid Marks, Marks must be between 0 and 100.";
    }
};
int main(){
    float m1,m2,m3,percentage;
    cout<<"Enter marks for subject 1: ";
    cin>>m1;
    cout<<"Enter marks for subject 2: ";
    cin>>m2;
    cout<<"Enter marks for subject 3: ";
    cin>>m3;
    try{
        if(m1<0||m1>100||m2<0||m2>100||m3<0||m3>100){
            throw InvalidMarksException(); //creates an object of custom exception class
        }

        percentage=(m1+m2+m3)/3.0;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if (percentage >= 75){
            cout << "Result: Distinction";
        }else if(percentage >= 60) {
            cout << "Result: First Class";
        }else if(percentage >= 40) {
            cout << "Result: Pass";
        }else{
            cout << "Result: Fail";
        }

    }
    catch(InvalidMarksException marks){//receives the exception object that was thrown
        marks.displayMessage();
    }
    return 0;
}

