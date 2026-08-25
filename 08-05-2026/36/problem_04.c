#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements of the first array are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Elements of the second array are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}