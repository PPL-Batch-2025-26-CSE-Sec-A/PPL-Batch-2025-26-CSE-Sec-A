#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    struct Student s[5];
    float total_marks = 0.0, avg_marks;
    int top_student_index = 0;

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Enter Name: ");
        scanf(" %[^\n]s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        total_marks += s[i].marks;

        if (s[i].marks > s[top_student_index].marks) {
            top_student_index = i;
        }
    }

    avg_marks = total_marks / 5.0;

    printf("\n------------------------------------------------\n");
    printf("%-12s %-25s %-10s\n", "Roll No", "Name", "Marks");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-12d %-25s %-10.2f\n", s[i].roll_number, s[i].name, s[i].marks);
    }
    printf("------------------------------------------------\n");

    printf("\nAverage Marks: %.2f\n", avg_marks);
    printf("Highest Scorer: %s (Roll No: %d) with %.2f marks\n", 
           s[top_student_index].name, s[top_student_index].roll_number, s[top_student_index].marks);

    return 0;
}