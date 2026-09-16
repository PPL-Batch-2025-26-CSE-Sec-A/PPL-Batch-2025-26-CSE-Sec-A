#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter three side of triangle: ";
	cin>>a>>b>>c;
	if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a)){
		cout<<"The given sides from a right triangle.";
	}
	else {
		cout<<"The given sides do not from a triangle.";
	}
	return 0;
	}
