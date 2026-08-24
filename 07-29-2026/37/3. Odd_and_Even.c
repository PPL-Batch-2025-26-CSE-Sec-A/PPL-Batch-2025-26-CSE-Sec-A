#include<stdio.h>

void countEvenOdd(int a)
{
    int i,num,evenCount=0,oddCount=0;
    for(i=1;i<=a;i++)
    {
        printf("Enter number %d ",i);
        scanf("%d",&num);
        if(num%2==0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Even numbers is %d ",evenCount);
    printf("Odd numbers is %d ",oddCount);
}
int main()
{
    int n;
    printf("Enter numbers to enter ");
    scanf("%d",&n);
    countEvenOdd(n);
    return 0;
}
