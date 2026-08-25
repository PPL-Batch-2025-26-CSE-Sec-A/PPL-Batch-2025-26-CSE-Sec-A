#include<stdio.h>
void prime(int m,int n)
{
	int i,j,k=0;
	for(j=m;j<=n;j++){
		for(i=2;i<j;i++){
			if(j%i==0){
				k++;
				break;
			}
		}
		i=2;
		if(k==0)
			printf("%d is prime.\n",j);
		else 
			printf("%d is not prime.\n",j);
		k=0;	
	}
}
int main()
{
	int m,n;
	printf("Range:");
	scanf("%d %d",&m,&n);
	prime(m,n);
}
