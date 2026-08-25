#include <stdio.h>

void calculator()
{
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid Choice");
    }
}

int main()
{
    calculator();

    return 0;
}#include <stdio.h>

int isArmstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == n)
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
        printf("%d is an Armstrong Number", n);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}