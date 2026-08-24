#include<stdio.h>
#include<string.h>

struct Employee
{
    int emp_id;
    char emp_name[50];
    struct Salary
    {
        //nested structure;;
        float basicpay;
        float da;
        float hra;
        float cca;
    }sal;
};
int main()
{
    struct Employee e;
    float grossSalary;
    printf("Enter Employee ID ");
    scanf("%d", &e.emp_id);
    printf("Enter Employee Name ");
    scanf("%s", &e.emp_name);
    printf("Enter Basic Pay ");
    scanf("%f", &e.sal.basicpay);
    printf("Enter DA ");
    scanf("%f", &e.sal.da);
    printf("Enter HRA ");
    scanf("%f", &e.sal.hra);
    printf("Enter CCA ");
    scanf("%f", &e.sal.cca);
    grossSalary=e.sal.basicpay+e.sal.da+e.sal.hra+e.sal.cca;
    printf("---\nEmployee Details---\n");
    printf("\nEmployee ID is %d",e.emp_id);
    printf("\nEmployee Name is %s",e.emp_name);
    printf("\nBasic pay is %.2f",e.sal.basicpay);
    printf("\nDA is %.2f",e.sal.da);
    printf("\nHRA is %.2f",e.sal.hra);
    printf("\nCCA is %.2f",e.sal.cca);
    printf("\nGross Salary is %.2f",grossSalary);
    return 0;
}
