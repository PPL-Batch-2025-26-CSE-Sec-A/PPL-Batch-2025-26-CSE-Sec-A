#include <stdio.h>

void fibo(int n)
{
    int a=0,b=1,c,i;
        printf("%d ",a);
        printf("%d ",b);

    for (i=3;i<=n;i++)
    {
        c= a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series is: ");
    fibo(n);
    return 0;
}
