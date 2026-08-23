#include <stdio.h>

int even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int start, end, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if (even(i))
            evenCount++;
        else
            oddCount++;
    }

    printf("Total Even Numbers = %d\n", evenCount);
    printf("Total Odd Numbers = %d\n", oddCount);

    return 0;
}