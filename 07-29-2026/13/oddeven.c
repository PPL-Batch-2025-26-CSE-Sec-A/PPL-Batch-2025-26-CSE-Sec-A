#include <stdio.h>

int main() {
    int n, num, even = 0, odd = 0;
    printf("Enter total number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d\nOdd: %d\n", even, odd);
    return 0;
}