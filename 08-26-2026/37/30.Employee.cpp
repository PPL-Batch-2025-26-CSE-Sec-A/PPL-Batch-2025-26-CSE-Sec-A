#include<iostream>
using namespace std;
class Employee
{
private:
    float salary;
    float allowance;
public:
    void setDetails(float s,float a)
    {
        salary=s;
        allowance=a;
    }
    void display()
    {
        cout << "Salary is " << salary << endl;
        cout << "Allowance is " << allowance << endl;
    }
};
int main()
{
    Employee e[3];
    float s,a;
    for(int i=0; i<3;i++)
    {
        cout<< "Enter salary and allowance of Employee "<<i+1<<" ";
        cin>>s>>a;
        e[i].setDetails(s,a);
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Employee " << i+1 << " "<< endl;
        e[i].display();
    }
    return 0;
}
