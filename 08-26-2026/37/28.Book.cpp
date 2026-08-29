#include<iostream>
using namespace std;
class Book
{
private: // data hiding
    int l,b,h;
public:
    void setDimension(int length,int breadth,int height)
    {
        l=length;
        b=breadth;
        h=height;
    }
int calcVolume()
{
    return l*b*h;
}
void displayVolume()
{
    cout<<"Volume is " << calcVolume() << " cubic units ";
}
};

int main()
{
    Book b1;
    int l,b,h;
    cout<<"Enter length ";
    cin>>l;
    cout<<"Enter breadth ";
    cin>>b;
    cout<<"Enter height ";
    cin>>h;
    b1.setDimension(l,b,h); //object function
    b1.displayVolume();
    return 0;
}
