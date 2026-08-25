#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}