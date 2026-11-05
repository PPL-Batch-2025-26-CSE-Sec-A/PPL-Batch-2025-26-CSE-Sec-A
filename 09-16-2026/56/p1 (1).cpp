#include <iostream>
using namespace std;

int main() {
    int arr[7];
    cout << "Enter seven numbers: ";
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Numbers in descending order: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}