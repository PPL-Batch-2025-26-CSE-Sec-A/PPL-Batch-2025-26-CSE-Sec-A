#include<stdio.h>
int Even(int a)
{
	return (a%2==0);
}
int main()
{
	int n,a,b=0,c=0,i;
	printf("Enter how many number you want to check :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter number %d :",i);
		scanf("%d",&a);
		if(Even(a))
		{
			b++;
		}
		else{
			c++;
		}
	}
	printf("\n Total even number : %d and Total odd number : %d",b,c);
	return 0;
}
