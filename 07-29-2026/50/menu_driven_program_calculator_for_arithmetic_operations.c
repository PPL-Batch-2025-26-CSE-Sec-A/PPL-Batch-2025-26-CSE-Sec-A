#include <stdio.h>

float calc(float a, float b, int ch) {
    switch(ch) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: return a / b;
    }
    return 0;
}

int main() {
    int ch;
    float a, b;

    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4) {
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            printf("Result = %.2f\n", calc(a, b, ch));
        }

    } while (ch != 5);

    return 0;
}
