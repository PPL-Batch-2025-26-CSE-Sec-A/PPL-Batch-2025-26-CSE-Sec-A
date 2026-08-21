#include <iostream>
#include <cmath>

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