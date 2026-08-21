#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter the first integer: ";
    std::cin >> a;
    
    std::cout << "Enter the second integer: ";
    std::cin >> b;
    
    if (a == 30 || b == 30 || (a + b) == 30) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    
    return 0;
}