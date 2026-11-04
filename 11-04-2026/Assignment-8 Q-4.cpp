#include <iostream>
using namespace std;

// Custom Exception Class
class InvalidMarksException {
public:
    void display() {
        cout << "Error: Invalid Marks! Marks must be between 0 and 100.";
    }
};

int main() {
    int m1, m2, m3;
    float percentage;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    try {
        // Validate Marks
        if(m1 < 0 || m1 > 100 ||
           m2 < 0 || m2 > 100 ||
           m3 < 0 || m3 > 100) {

            throw InvalidMarksException();
        }

        // Calculate Percentage
        percentage = (m1 + m2 + m3) / 3.0;

        cout << "Percentage: " << percentage << "%" << endl;

        // Display Result
        if(percentage >= 75) {
            cout << "Result: Distinction";
        }
        else if(percentage >= 60) {
            cout << "Result: First Class";
        }
        else if(percentage >= 40) {
            cout << "Result: Pass";
        }
        else {
            cout << "Result: Fail";
        }
    }

    catch(InvalidMarksException e) {
        e.display();
    }

    return 0;
}