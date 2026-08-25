#include<stdio.h>
int main()
{
	int n;
	printf("No of element:");
	scanf("%d",&n);
	fibo(n);
}
void fibo(int n){
	int a=0,b=1,f,i;
	if(n>=1)
		printf("%d ",a);
	if(n>=2)
		printf("%d ",b);
	while(i<n-2){
		f=a+b;
		printf("%d ",f);
		a=b;
		b=f;
		i++;
	}
}
