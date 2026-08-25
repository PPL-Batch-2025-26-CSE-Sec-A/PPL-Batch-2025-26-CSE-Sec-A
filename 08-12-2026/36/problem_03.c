#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    struct Student s[5];
    float total = 0, average;
    int highestIndex = 0;

    for(int i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;

        if(s[i].marks > s[highestIndex].marks) {
            highestIndex = i;
        }
    }

    printf("\n\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("------------------------------------------------\n");

    for(int i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }

    average = total / 5;

    printf("\nAverage Marks = %.2f\n", average);

    printf("\nStudent with Highest Marks:\n");
    printf("Roll Number: %d\n", s[highestIndex].roll);
    printf("Name: %s\n", s[highestIndex].name);
    printf("Marks: %.2f\n", s[highestIndex].marks);

    return 0;
}