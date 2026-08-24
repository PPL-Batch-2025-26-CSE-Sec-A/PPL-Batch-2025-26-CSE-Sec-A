#include<stdio.h>
#include<math.h>

int isArmstrong(int n)
{
    int temp=n;
    int sum=0,count=0,digit;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+pow(digit,count);
        n=n/10;
    }
    if(sum==temp)
        return 1;
    else
        return 0;
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(isArmstrong(a))
        printf("%d is an Armstrong number ",a);
    else
        printf("%d is not an Armstrong number ",a);
    return 0;
}
