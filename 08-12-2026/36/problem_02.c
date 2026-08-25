#include <stdio.h>

struct Salary {
    float basicpay;
    float da;
    float hra;
    float cca;
};

struct Employee {
    int empid;
    char empname[100];
    struct Salary sal;
};

int main() {
    struct Employee emp;
    float grossSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &emp.sal.basicpay);

    printf("Enter DA: ");
    scanf("%f", &emp.sal.da);

    printf("Enter HRA: ");
    scanf("%f", &emp.sal.hra);

    printf("Enter CCA: ");
    scanf("%f", &emp.sal.cca);

    grossSalary = emp.sal.basicpay + emp.sal.da +
                  emp.sal.hra + emp.sal.cca;

    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp.empid);
    printf("Employee Name: %s\n", emp.empname);
    printf("Basic Pay: %.2f\n", emp.sal.basicpay);
    printf("DA: %.2f\n", emp.sal.da);
    printf("HRA: %.2f\n", emp.sal.hra);
    printf("CCA: %.2f\n", emp.sal.cca);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}