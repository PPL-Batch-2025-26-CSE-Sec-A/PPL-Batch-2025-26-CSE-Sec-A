#include <iostream>
using namespace std;

class Book
{
    float length, width, height;

public:

    void getData()
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
        cout << "Volume of Book = "
             << length * width * height;
    }
};

int main()
{
    Book b;

    b.getData();
    b.volume();

    return 0;
}
