#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter the first non-negative integer: ";
    std::cin >> a;
    
    std::cout << "Enter the second non-negative integer: ";
    std::cin >> b;

    if (a % 10 == b % 10) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    
    return 0;
}