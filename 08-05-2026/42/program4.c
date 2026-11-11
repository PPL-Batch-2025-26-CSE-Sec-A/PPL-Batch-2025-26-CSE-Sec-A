#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Copied array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}