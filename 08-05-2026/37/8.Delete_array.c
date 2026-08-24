#include<stdio.h>
int main()
{
    int arr[100],a,b,i;
    printf("Enter number of elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete ");
    scanf("%d",&b);
    for(i=b-1;i<a-1;i++)
    {
        arr[i]=arr[i+1];
    }
    a--;
    printf("Array after deletion ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
