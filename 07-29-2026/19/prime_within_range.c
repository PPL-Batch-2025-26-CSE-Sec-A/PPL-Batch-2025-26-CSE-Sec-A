// To check for a prime number within a range
#include<stdio.h>

int prime(int n);

int main()
{
    int l,h;

    printf("Enter the lower limit : ");
    scanf("%d",&l);
    printf("Enter the upper limit : ");
    scanf("%d",&h);

    for(int i=l;i<=h;i++) {
        if(prime(i) == 1)
            printf("%d is a prime number.\n",i);
        else
            continue;
    }
    return 0;
}

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}