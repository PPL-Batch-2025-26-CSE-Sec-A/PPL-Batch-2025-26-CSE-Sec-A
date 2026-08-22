#include<stdio.h>

int armstrong(int num);

int main()
{
    int num;

    printf("Enter the number to be checked: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

int armstrong(int num)
{
    int rem, sum = 0;
    int temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == num);
}