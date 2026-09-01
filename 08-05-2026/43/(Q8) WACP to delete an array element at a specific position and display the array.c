// WACP to copy all the elements from one array to another array.
#include <stdio.h>
#define MAX_SIZE 100

void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int source[MAX_SIZE];
    int destination[MAX_SIZE];
    int size;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size > MAX_SIZE) {
        printf("Size exceeds maximum limit. Setting size to %d.\n", MAX_SIZE);
        size = MAX_SIZE;
    }

    printf("Enter %d elements for the source array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &source[i]);
    }

    copyArray(source, destination, size);

    printf("Source array: ");
    displayArray(source, size);

    printf("Destination array: ");
    displayArray(destination, size);

    return 0;
}