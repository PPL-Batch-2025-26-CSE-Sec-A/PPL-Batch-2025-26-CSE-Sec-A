#include<stdio.h>
int prime(int n){
	int i,p;
	p=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			p++;
			break;
		}
	}
	return p;
}
int main()
{
	int n;
	printf("Input:");
	scanf("%d",&n);
	int p=prime(n);
	if(p==0)
		printf("%d is prime on",n);
	else
		printf("%d is not prime",n);
	
	
	
}
