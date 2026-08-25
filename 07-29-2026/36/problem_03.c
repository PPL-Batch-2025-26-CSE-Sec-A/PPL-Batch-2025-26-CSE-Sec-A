#include <stdio.h>
int isArmstrong(int n)
{
    int original, digit, sum = 0;
    original = n;

    while (n > 0)
    {
        digit = n % 10;                 
        sum = sum + digit * digit * digit; 
        n = n / 10;                    
    }

    if (sum == original)
        return 1;
    else
        return 0;
}
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is Not an Armstrong Number.", n);

    return 0;
}