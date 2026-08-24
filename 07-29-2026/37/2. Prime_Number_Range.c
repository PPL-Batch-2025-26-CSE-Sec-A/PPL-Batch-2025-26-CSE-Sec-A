#include<stdio.h>
int A(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a,b,n;
    printf("Enter starting number ");
    scanf("%d",&a);
    printf("Enter ending number ");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        if(A(i))
            printf("%d ",i);
    }
    return 0;
}
