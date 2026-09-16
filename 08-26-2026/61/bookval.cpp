#include <iostream>
using namespace std;

class Book {
private:
    double length, width, height;

public:
    Book(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Book myBook(10.0, 5.0, 2.0);
    cout << "Volume of the book: " << myBook.calculateVolume() << " cubic units." << endl;
    return 0;
}