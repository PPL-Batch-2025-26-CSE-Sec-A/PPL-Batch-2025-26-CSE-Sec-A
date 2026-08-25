#include<stdio.h>
#include<string.h>

struct employee{
    int emp_id;
    char emp_name[50];
    struct emp_salary{
        float sal_basic;
        float sal_da;
        float sal_hra;
        float sal_cca;
    }employee_sal;
};

int main(){
    int i,n;
    printf("Enter number of employee:");
    scanf("%d",&n);
    struct employee employee_log[n];
    for(i=0;i<n;i++){
        printf("Enter %d employee's ID:",i+1);
        scanf("%d",&employee_log[i].emp_id);
        printf("Enter %d employee's name:",i+1);
        scanf("%s",&employee_log[i].emp_name);
        printf("Enter %d employee's basic salary:",i+1);
        scanf("%f",&employee_log[i].employee_sal.sal_basic);
        printf("Enter %d employee's salary da:",i+1);
        scanf("%f",&employee_log[i].employee_sal.sal_da);
        printf("Enter %d employee's salary hra:",i+1);
        scanf("%f",&employee_log[i].employee_sal.sal_hra);
        printf("Enter %d employee's salary cca:",i+1);
        scanf("%f",&employee_log[i].employee_sal.sal_cca);
        printf("\n");
    }
    printf("--------Gross Salary-----------\n");

    for(i=0;i<n;i++){
        float basic=employee_log[i].employee_sal.sal_basic;
        float da=employee_log[i].employee_sal.sal_da;
        float hra=employee_log[i].employee_sal.sal_hra;
        float cca=employee_log[i].employee_sal.sal_cca;
        float gross= basic+da+hra+cca;
        printf("Gross salary of %d employee is: %.2f\n",i+1,gross);
        printf("----\n");
    }
    return 0;
}
