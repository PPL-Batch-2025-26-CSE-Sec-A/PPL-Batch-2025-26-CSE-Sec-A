#include <iostream>
using namespace std;

class InvalidMarksException {
};

int main() {
    int m1, m2, m3;
    double per;

    cout << "Enter three subject marks: ";
    cin >> m1 >> m2 >> m3;

    try {
        if (m1 < 0 || m1 > 100 ||
            m2 < 0 || m2 > 100 ||
            m3 < 0 || m3 > 100) {
            throw InvalidMarksException();
        }

        per = (m1 + m2 + m3) / 3.0;

        cout << "Percentage = " << per << "%" << endl;

        if (per >= 75)
            cout << "Distinction";
        else if (per >= 60)
            cout << "First Class";
        else if (per >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
    catch (InvalidMarksException e) {
        cout << "Invalid Marks!";
    }

    return 0;
}
