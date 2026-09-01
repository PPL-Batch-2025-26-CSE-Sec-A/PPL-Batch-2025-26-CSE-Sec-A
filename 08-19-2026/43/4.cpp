// Write in C++ to Find the largest number among 3 numbers.
#include <iostream>

int main() {
  int a, b, c;

  std::cout << "Enter the first number: ";
  std::cin >> a;

  std::cout << "Enter the second number: ";
  std::cin >> b;

  std::cout << "Enter the third number: ";
  std::cin >> c;

  int max = a;

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  std::cout << "The largest number is: " << max << "\n";

  return 0;
}