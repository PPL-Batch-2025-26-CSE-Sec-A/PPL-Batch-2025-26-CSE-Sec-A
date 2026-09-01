// Write in C++ to find the absolute difference between n & 51. If n is greater
// than 51, return triple the difference.
#include <cmath>
#include <iostream>


int main() {
  int n;

  std::cout << "Enter a number (n): ";
  std::cin >> n;

  int diff = std::abs(n - 51);

  if (n > 51) {
    std::cout << diff * 3 << "\n";
  } else {
    std::cout << diff << "\n";
  }

  return 0;
}