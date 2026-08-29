#include<iostream>
using namespace std;
int main()
{
    int a,i,start,end;
    cout<<"Enter a number ";
    cin>>start;
    cout<<"Enter a number ";
    cin>>end;
    cout<<"Perfect numbers are ";
    for(a=start;a<=end;a++)
    {
        int sum=0;
        for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==a)
        {
            cout<< a <<" ";
        }
    }
    return 0;
}
