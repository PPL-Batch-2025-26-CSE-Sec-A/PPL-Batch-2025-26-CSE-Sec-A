#include <stdio.h>

int armstrong(int n)
{
    int temp, digit, sum = 0;

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is Not an Armstrong Number.", num);

    return 0;
}