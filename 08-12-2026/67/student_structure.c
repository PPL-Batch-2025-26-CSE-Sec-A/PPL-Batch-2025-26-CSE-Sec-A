#include <stdio.h>

struct Student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    struct Student s[5];
    float total_marks = 0.0, average_marks;
    int highest_index = 0;

    printf("Enter details for 5 students:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        
        printf("  Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        
        printf("  Enter Marks: ");
        scanf("%f", &s[i].marks);

        total_marks += s[i].marks;

        if (s[i].marks > s[highest_index].marks) {
            highest_index = i;
        }
        printf("\n");
    }

    average_marks = total_marks / 5.0;

    printf("====================================================\n");
    printf("%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
    printf("====================================================\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-25s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    printf("====================================================\n");

    printf("\nAverage Marks: %.2f\n", average_marks);
    printf("\n--- Highest Scoring Student ---\n");
    printf("Roll No : %d\n", s[highest_index].roll_no);
    printf("Name    : %s\n", s[highest_index].name);
    printf("Marks   : %.2f\n", s[highest_index].marks);

    return 0;
}