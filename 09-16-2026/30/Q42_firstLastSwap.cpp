#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;

    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    if (num < 10) {
        if (isNegative) num = -num;
        cout << "Swapped number: " << num << endl;
        return 0;
    }
    int lastDigit = num % 10;
    int digitsCount = log10(num);
    int placeValue = pow(10, digitsCount);
    int firstDigit = num / placeValue;
    int middlePart = (num % placeValue) / 10;
    int swappedNum = (lastDigit * placeValue) + (middlePart * 10) + firstDigit;
    if (isNegative) {
        swappedNum = -swappedNum;
    }
    cout << "Swapped number: " << swappedNum << endl;

    return 0;
}
