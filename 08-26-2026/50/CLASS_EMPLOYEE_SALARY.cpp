#include<iostream>
using namespace std;
class Employee
{
    float salary,allowance;
public:
    void input()
    {
        cout<<"Enter salary and allowance: ";
        cin>>salary>>allowance;
    }
    void display()
    {
        cout<<"Salary = "<<salary<<endl;
        cout<<"Allowance = "<<allowance<<endl;
    }
};
int main()
{
    Employee e[3];
    for(int i=0;i<3;i++)
        e[i].input();
    for(int i=0;i<3;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;
        e[i].display();
    }
    return 0;
}
