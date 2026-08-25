#include<stdio.h>
int main()
{
	int i,n,p,e;
	printf("Enter the number of element you want : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
printf("Enter the position you want to insert any element :");
scanf("%d",&p);
printf("Enter the element you want to insert :");
scanf("%d",&e);
for(i=n-1;i>=p;i--);
{
	arr[i+1]=arr[i];
}
arr[p-1]=e;
n++;
printf("Array after insertion :");
for(i=0;i<n-1;i++){
printf("%d",arr[i]);
printf("\t");
}
	return 0;
}
