#include<stdio.h>
#include<string.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i,highest=0;
    float sum=0,avg;
    for(i=0;i<5;i++)
    {
        printf("\nEnter details of sudent %d\n",i+1);
        printf("Enter Roll Number ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name ");
        scanf("%s", s[i].name);
        printf("Enter Marks ");
        scanf("%f", &s[i].marks);
        sum=sum+s[i].marks;
    }
    for(i=1;i<5;i++)
    {
        if(s[i].marks>s[highest].marks)
        {
            highest=i;
        }
    }
    avg=sum/5;
    printf("\nStudent Details\n");
    printf("Roll\tName\tMarks\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%s\t%.2f\n",s[i].roll_no,s[i].name,s[i].marks);
    }
    printf("\nAvergae Marks is %.2f",avg);
    printf("\nHighest Marks Student ");
    printf("\nRoll numbers is %d",s[highest].roll_no);
    printf("\nName is %s",s[highest].name);
    printf("\nMarks is %.2f",s[highest].marks);
    return 0;
}
