#include <iostream>
#include <exception>
using namespace std;

class InvalidMarksException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Marks! Marks must be between 0 and 100.";
    }
};

int main() {
    float m1, m2, m3, percentage;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    try {
        if (m1 < 0 || m1 > 100 ||
            m2 < 0 || m2 > 100 ||
            m3 < 0 || m3 > 100) {

            throw InvalidMarksException();
        }

        percentage = (m1 + m2 + m3) / 3;

        cout << "\nPercentage: " << percentage << "%"
             << endl;

        if (percentage >= 75) {
            cout << "Result: Distinction" << endl;
        }
        else if (percentage >= 60) {
            cout << "Result: First Class" << endl;
        }
        else if (percentage >= 40) {
            cout << "Result: Pass" << endl;
        }
        else {
            cout << "Result: Fail" << endl;
        }
    }

    catch (InvalidMarksException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
