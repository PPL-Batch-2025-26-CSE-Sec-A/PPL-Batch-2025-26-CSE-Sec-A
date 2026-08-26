#include <iostream>
using namespace std;

class Book
{
    int length, width, height;

public:
    void input()
    {
        cin >> length >> width >> height;
    }

    void volume()
    {
        cout << "Volume = " << length * width * height;
    }
};

int main()
{
    Book b;

    cout << "Enter length, width and height: ";
    b.input();

    b.volume();

    return 0;
}

