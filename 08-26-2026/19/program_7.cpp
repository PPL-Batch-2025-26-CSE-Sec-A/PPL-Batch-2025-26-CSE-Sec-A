#include <iostream>
using namespace std;
class Book
{
    float length, breadth, height;
public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        cout << "Enter height: ";
        cin >> height;
    }
    void volume()
    {
        cout << "Volume of book = " << length * breadth * height;
    }
};
int main()
{
    Book b;
    b.input();
    b.volume();
    return 0;
}