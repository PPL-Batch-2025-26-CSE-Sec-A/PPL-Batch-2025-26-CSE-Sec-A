#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Number:");
	scanf("%d",&n);
	armstrong(n);
	return 0;
}
void armstrong(int n){
	int a=0,i=0,m=n;
	while(m>0){
		m=m%10;
		i++;
	}
	m=n;
	while(m>0){
		int N=m%10;
		a=a+pow(N,i);
		m=m%10;
	}
	if (a==n)
		printf("%d is Armstrong no.",n);
	else
		printf("%d is not armstrong",n);
}
