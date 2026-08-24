#include<stdio.h>
void fibo(int n)
{
    int a=0,b=1,c,i;
    printf("%d ",a);
    printf("%d ",b);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("The Fibonacci series upto nth term is \n",n);
    fibo(n);
    return 0;
}
