#include<stdio.h>
int A(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2;i=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(A(a))
        printf("The number is prime ");
    else
        printf("The number is not prime ");
    return 0;
}
