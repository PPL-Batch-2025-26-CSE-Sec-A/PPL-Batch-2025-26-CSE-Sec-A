#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n--- Calculator ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1 || choice == 5) break;

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) break;
        }

        switch (choice) {
            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}