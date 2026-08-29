#include<iostream>
using namespace std;
class Student
{
private:
    int roll;
    int marks[5];
public:
    void setDetails()
    {
        cout<<"Enter Roll Number is ";
        cin>>roll;
        cout<<"Enter marks ";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void display()
    {
        int sum=0;
        cout<<"Roll Number is " << roll << endl;
        cout<<"Marks is ";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
            sum=sum+marks[i];
        }
        cout<<"Total Marks is "<< sum;
    }
};
int main()
{
    Student s;
    s.setDetails();
    s.display();
    return 0;
}
