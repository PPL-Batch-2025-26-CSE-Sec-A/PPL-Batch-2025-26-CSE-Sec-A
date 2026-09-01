#include<iostream>
using namespace std;
bool checkThirty(int a , int b ){
return (a == 30 || b == 30 || (a + b == 30));
}
int main(){
	int a , b ;
	cout << "Enter two integers:\n";
	cin >> a >> b ;
	if (checkThirty(a,b))
	cout << "True" << endl;
	else 
	cout << "False" << endl;
	return 0;
}
