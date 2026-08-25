#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s[5];
    int i,highest=0;
    float sum=0,average;
    for(i=0;i<5;i++)
    {
        printf("\nEnter details of student %d:\n",i+1);
        printf("Enter Roll Number: ");
        scanf("%d",&s[i].roll);
        printf("Enter Name: ");
        scanf(" %[^\n]",s[i].name);
        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
        sum=sum+s[i].marks;
    }
    average=sum/5;
    for(i=1;i<5;i++)
    {
        if(s[i].marks>s[highest].marks)
        {
            highest=i;
        }
    }
    printf("\n-------------------------------------\n");
    printf("Roll\tName\t\tMarks");
    printf("\n-------------------------------------\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%s\t\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    printf("-------------------------------------\n");
    printf("Average Marks = %.2f\n",average);
    printf("\n----- Highest Scorer -----\n");
    printf("Roll Number : %d\n",s[highest].roll);
    printf("Name        : %s\n",s[highest].name);
    printf("Marks       : %.2f\n",s[highest].marks);
    return 0;
}
