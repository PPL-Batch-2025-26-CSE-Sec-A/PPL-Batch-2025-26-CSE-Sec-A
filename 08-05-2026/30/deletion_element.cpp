#include<stdio.h>
int main()
{
	int i,p,n;
	printf("Enter the number of element you want :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position you want to delete :");
	scanf("%d",&p);
	for(i=p-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deletion :");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
