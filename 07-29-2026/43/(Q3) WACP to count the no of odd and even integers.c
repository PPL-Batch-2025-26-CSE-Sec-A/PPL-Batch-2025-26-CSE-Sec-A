//WACP in c to count the number of odd and even integers(using function and loop).
#include <stdio.h>

void countOddEven(int start, int end, int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int start, end, oddCount, evenCount;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    countOddEven(start, end, &oddCount, &evenCount);

    printf("Number of odd integers in the range %d to %d: %d\n", start, end, oddCount);
    printf("Number of even integers in the range %d to %d: %d\n", start, end, evenCount);

    return 0;
}
