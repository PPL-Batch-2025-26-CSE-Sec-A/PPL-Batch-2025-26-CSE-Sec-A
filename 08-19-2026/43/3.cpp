// 3.	Write in C++ to swap 2 numbers without using third variable.
#include <iostream>

int main() {
  int a, b;

  std::cout << "Enter the first number: ";
  std::cin >> a;

  std::cout << "Enter the second number: ";
  std::cin >> b;

  a = a + b;
  b = a - b;
  a = a - b;

  std::cout << "After swapping: " << a << " " << b << "\n";

  return 0;
}