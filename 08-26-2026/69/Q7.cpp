//Create a class “Book” and calculate the Volume of a Book using member variables and functions.

#include <iostream>
using namespace std;

class Book
{
    float length, width, height;

public:

    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;
    }

    void volume()
    {
        float v = length * width * height;

        cout << "Volume of Book = " << v;
    }
};

int main()
{
    Book b;

    b.input();
    b.volume();

    return 0;
}