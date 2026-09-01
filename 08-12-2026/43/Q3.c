#include <stdio.h>

// Define structure for Student
struct Student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    struct Student s[5];
    float total_marks = 0.0, avg_marks;
    int highest_idx = 0;

    // Input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        
        printf("Name: ");
        scanf(" %[^\n]s", s[i].name);
        
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        total_marks += s[i].marks;

        if (s[i].marks > s[highest_idx].marks) {
            highest_idx = i;
        }
        printf("\n");
    }

    avg_marks = total_marks / 5.0;

    // Display student records in tabular form
    printf("\n%-12s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-----------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-12d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    printf("-----------------------------------------\n");

    // Display summary statistics
    printf("\nAverage Marks of the Class: %.2f\n", avg_marks);
    printf("Highest Marks Obtained By : %s (Roll No: %d) with %.2f marks\n", 
           s[highest_idx].name, s[highest_idx].roll_no, s[highest_idx].marks);

    return 0;
}