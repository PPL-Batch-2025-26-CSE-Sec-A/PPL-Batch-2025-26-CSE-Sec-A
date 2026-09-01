#include<iostream>
using namespace std;
bool samelastDigit ( int a , int b){
	if ( a < 0 || b < 0) return false;
	return ( a % 10 == b % 10);
}
int main(){
	int a , b;
	cout << "Enter two non-negative integers : \n";
	cin >> a >> b ;
	if ( samelastDigit (a,b))
	cout << "both number have the same Last digit." << endl;
	else
	cout << "Enter number have not the same Last digit." << endl;
	return 0;
}
