#include<stdio.h>
int A(int n){
	int i;
	if(n<=1)
	{
		return 0;
	}
	for(i=2;i<=n/2;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,j,i;
	printf("Enter the start number :");
	scanf("%d",&j);
	printf("Enter the end number :");
	scanf("%d",&n);
	for(i=j;i<=n;i++){
		if(A(i)){
			printf("The number %d are prime number",i);
		}
		else{
			printf("The numbers %d are not prime number",i);
		}
			printf("\n");
	}
	return 0;
}
