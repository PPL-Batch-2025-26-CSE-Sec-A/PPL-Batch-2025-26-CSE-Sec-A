#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "Enter the first integer: ";
    std::cin >> a;
    
    std::cout << "Enter the second integer: ";
    std::cin >> b;
    
    std::cout << "Enter the third integer: ";
    std::cin >> c;

    if (a + b == c || a + c == b || b + c == a) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    
    return 0;
}