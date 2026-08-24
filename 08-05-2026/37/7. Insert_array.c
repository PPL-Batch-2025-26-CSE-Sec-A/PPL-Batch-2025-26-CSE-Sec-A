#include<stdio.h>
int main()
{
    int arr[100],a,b,c,i;
    printf("Enter number of elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position ");
    scanf("%d",&b);
    printf("Enter elements to insert ");
    scanf("%d",&c);
    for(i=a-1;i>=b;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[b-1]=c;
    a++;
    printf("Array after insertion ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
