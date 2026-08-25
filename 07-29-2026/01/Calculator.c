#include <stdio.h>

void add(int a, int b)
{
    printf("Result = %d\n", a + b);
}

void subtract(int a, int b)
{
    printf("Result = %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Result = %d\n", a * b);
}

void divide(int a, int b)
{
    if (b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Result = %d\n", a / b);
}

int main()
{
    int choice, a, b;

    printf("---- MENU ----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            add(a, b);
            break;

        case 2:
            subtract(a, b);
            break;

        case 3:
            multiply(a, b);
            break;

        case 4:
            divide(a, b);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}