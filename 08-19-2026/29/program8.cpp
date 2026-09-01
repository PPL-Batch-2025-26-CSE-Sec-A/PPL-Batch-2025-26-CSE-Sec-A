
#include <iostream>

using namespace std;
bool isSumPossible ( int a , int b, int c){
    return ( a + b == c )||( a + c == b) || (b + c == a);
}
int main(){
	int a , b,c;
	cout << "Enter three numbers : \n";
	cin >> a >> b >> c ;
    if( isSumPossible(a,b,c))
        cout << "Possibel (true)." << endl;
        else 
        cout << "Not possible (False)." << endl;
    

	return 0;
}
