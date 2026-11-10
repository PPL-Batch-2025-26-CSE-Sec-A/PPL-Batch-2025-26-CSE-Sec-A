#include<iostream>
using namespace std;
class InvalidMarksException
{
};
int main()
{
    int a1,a2,a3;
    float percentage;
    cout<< "Enter marks of three subjects ";
    cin>>a1>>a2>>a3;
    try
    {
        if(a1<0 || a1>100 || a2<0 || a2>100 || a3<0 || a3>100)
        {
            throw InvalidMarksException();
        }
        percentage=(a1+a2+a3)/3.0;
        cout << "Percentage " << percentage << "%" << endl;
        if(percentage>=75)
        {
            cout<< "Result: Distinction" << endl;
        }
        else if(percentage>=60)
        {
            cout<< "Result: First Class" << endl;
        }
        else if(percentage>=40)
        {
            cout<< "Result: Pass" << endl;
        }
        else
        {
            cout<< "Result: Fail" << endl;
        }
    }
    catch(InvalidMarksException)
    {
        cout<< "Invalid Marks! Marks must be between 0 and 100";
    }
    return 0;
}
