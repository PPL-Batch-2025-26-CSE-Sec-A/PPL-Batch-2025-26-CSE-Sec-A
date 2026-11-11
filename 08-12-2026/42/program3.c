#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    float total = 0, avg;
    int i, highest = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;

        if(s[i].marks > s[highest].marks)
            highest = i;
    }

    printf("\n\n--- Student Records ---\n");
    printf("Roll\tName\t\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    avg = total / 5;

    printf("\nAverage Marks = %.2f\n", avg);

    printf("\nStudent with Highest Marks:\n");
    printf("Roll No : %d\n", s[highest].roll);
    printf("Name : %s\n", s[highest].name);
    printf("Marks : %.2f\n", s[highest].marks);

    return 0;
}