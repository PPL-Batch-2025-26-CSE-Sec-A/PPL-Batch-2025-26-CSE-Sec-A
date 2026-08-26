//WACP in c to devlopes a menu driven calculator for arithmetic operations(using function and loop).
#include <stdio.h>
void add() {
    double a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}
void subtract() {
    double a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}
void multiply() {
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}
void divide() {
    double a, b;
    printf("Enter two numbers to divide: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();  
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}
