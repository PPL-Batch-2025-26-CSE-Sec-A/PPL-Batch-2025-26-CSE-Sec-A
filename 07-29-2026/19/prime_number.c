// To check for a prime number
#include<stdio.h>

int prime(int n);

int main()
{
    int n;

    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    if(prime(n) == 1)
        printf("Prime number.");
    else
        printf("Not a prime number.");

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