#include <iostream>
int main(){
    	int a,b;
	std :: cout << "Enter two numbers:\n";
	std :: cin >> a  >> b;
        a = a + b;
    b = a - b;
    a = a - b;
    std :: cout << " After swapping: a = " << a << ", b = " << b << std :: endl; 
    return 0;
	}
