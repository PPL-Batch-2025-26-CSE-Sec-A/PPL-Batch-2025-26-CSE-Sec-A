#include<iostream>
using namespace std;
int main()
{
    int a[7];
    int i,j,temp;
    cout << "Enter the 7 numbers one by one : ";
    for(i=0;i<7;i++)
        cin >> a[i];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "The sorted array is : ";
    for(i=0;i<7;i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}