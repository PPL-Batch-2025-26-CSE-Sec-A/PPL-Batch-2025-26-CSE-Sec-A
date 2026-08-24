#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int main()
{
    int choice,x,y;
    char ch;
    do
    {
        printf("\nMenu\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("Enter a choice ");
        scanf("%d",&choice);
        printf("Enter a number ");
        scanf("%d",&x);
        printf("Enter a number ");
        scanf("%d",&y);
        switch(choice)
        {
            case 1:
                printf("Result is %d ",add(x,y));
                break;
            case 2:
                printf("Result is %d ",sub(x,y));
                break;
            case 3:
                printf("Result is %d ",multiply(x,y));
                break;
            case 4:
                printf("Result is %d ",divide(x,y));
                break;
            default:
                printf("Invalid choice\n ");
        }
        printf("Do you want to continue?(Y/N) ");
        scanf(" %c",&ch);
    }while(ch=='Y' || ch=='y');
    return 0;
}
