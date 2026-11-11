
#include <iostream>
using namespace std;

// User-defined exception class
class InvalidMarksException {
};

int main() {

    int m1, m2, m3;
    int total;
    float percentage;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    try {

        // Validate marks
        if (m1 < 0 || m1 > 100 ||
            m2 < 0 || m2 > 100 ||
            m3 < 0 || m3 > 100) {

            throw InvalidMarksException();
        }

        // Calculate total and percentage
        total = m1 + m2 + m3;

        percentage = (total / 300.0) * 100;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        // Display result
        if (percentage >= 75) {
            cout << "Result: Distinction";
        }
        else if (percentage >= 60) {
            cout << "Result: First Class";
        }
        else if (percentage >= 40) {
            cout << "Result: Pass";
        }
        else {
            cout << "Result: Fail";
        }

    }

    catch (InvalidMarksException e) {

        cout << "Exception: Invalid marks entered!" << endl;
        cout << "Marks must be between 0 and 100.";

    }

    return 0;
}
