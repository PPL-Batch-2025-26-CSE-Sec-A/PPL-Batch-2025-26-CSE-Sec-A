#include<iostream>
using namespace std;
class Book
{
    int length,breadth,height;
public:
    void input()
    {
        cout<<"Enter length, breadth and height: ";
        cin>>length>>breadth>>height;
    }
    void volume()
    {
        cout<<"Volume = "<<length*breadth*height;
    }
};
int main()
{
    Book b;
    b.input();
    b.volume();
    return 0;
}
