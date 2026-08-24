#include<stdio.h>
int main()
{
    int arr[10],a,i,j,count=0;
    printf("Enter number of elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }

        }
    }
    printf("Duplicate elements is %d ",count);
    return 0;
}
