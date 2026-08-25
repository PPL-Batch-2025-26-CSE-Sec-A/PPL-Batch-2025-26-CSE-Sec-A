#include <stdio.h>

int isPalindrome(int n)
{
    int original, reverse = 0, digit;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (reverse == original)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome Number.", n);
    else
        printf("%d is Not a Palindrome Number.", n);

    return 0;
}