#include <stdio.h>

// Define nested structure for Salary
struct Salary {
    float basicpay;
    float da;
    float hra;
    float cca;
};

// Define structure for Employee
struct Employee {
    int empid;
    char empname[100];
    struct Salary sal;
};

int main() {
    struct Employee emp;
    float gross_salary;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &emp.sal.basicpay);

    printf("Enter DA: ");
    scanf("%f", &emp.sal.da);

    printf("Enter HRA: ");
    scanf("%f", &emp.sal.hra);

    printf("Enter CCA: ");
    scanf("%f", &emp.sal.cca);

    // Calculate gross salary
    gross_salary = emp.sal.basicpay + emp.sal.da + emp.sal.hra + emp.sal.cca;

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", emp.empid);
    printf("Employee Name : %s\n", emp.empname);
    printf("Basic Pay     : %.2f\n", emp.sal.basicpay);
    printf("DA            : %.2f\n", emp.sal.da);
    printf("HRA           : %.2f\n", emp.sal.hra);
    printf("CCA           : %.2f\n", emp.sal.cca);
    printf("Gross Salary  : %.2f\n", gross_salary);

    return 0;
}