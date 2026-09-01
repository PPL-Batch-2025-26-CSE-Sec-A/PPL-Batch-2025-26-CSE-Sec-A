// Write in C++ to check if it is possible to add 2 integers to get the third
// from three given integers Write in C++ to check if it is possible to add 2
// integers to get the third from three given integers.

#include <iostream>
using namespace std;

bool canAddToGetThird(int a, int b, int c) {
  return (a + b == c || a + c == b || b + c == a);
}

int main() {
  int x, y, z;
  cout << "Enter three integers: ";
  cin >> x >> y >> z;

  if (canAddToGetThird(x, y, z)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  return 0;
}
