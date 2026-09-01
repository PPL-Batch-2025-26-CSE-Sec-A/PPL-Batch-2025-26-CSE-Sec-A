#include<iostream>
int main(){
    int a,b,c;
    std :: cout << " Enter the numbers:\n";
    std :: cin >> a >> b >> c;
    if(a >= b && a >= c){
        std :: cout << "Largest number is:"<< a << std :: endl;
    }else if(b >= c && b >= c){
        std :: cout << "Largest number is: "<<  b << std :: endl;
    }else {
        std :: cout << "Largest number is:"<< c << std :: endl;
    }
    return 0;
}
