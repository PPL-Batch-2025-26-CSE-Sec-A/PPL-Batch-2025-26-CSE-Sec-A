#include<stdio.h>
int main()
{
    int arr1[]={8,9,2,3,6},arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("Copied array is ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
