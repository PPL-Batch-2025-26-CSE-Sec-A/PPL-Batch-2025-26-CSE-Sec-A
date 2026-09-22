#include<stdio.h>
#include<string.h>

struct student{
    int stu_roll;
    char stu_name[50];
    float stu_marks;
};

int main(){
    int i;
    struct student stu_log[5];
    for(i=0;i<5;i++){
        printf("Enter %d student's roll:",i+1);
        scanf("%d",&stu_log[i].stu_roll);
        printf("Enter %d student's name:",i+1);
        scanf("%s",&stu_log[i].stu_name);
        printf("Enter %d student's marks:",i+1);
        scanf("%f",&stu_log[i].stu_marks);
        printf("\n");
    }
    printf("---------------Student Details-------------\n");
    printf("\n%-10s %-20s %-10s","Roll","Name","Marks");
    printf("\n-------------------------------------------\n");
    for(i=0;i<5;i++){
        printf("%-10d %-20s %-10.2f\n",stu_log[i].stu_roll,
               stu_log[i].stu_name,
               stu_log[i].stu_marks);
    }
    printf("\n-------------------------------------------\n");
    float avg_marks=(stu_log[0].stu_marks+stu_log[1].stu_marks+stu_log[2].stu_marks+stu_log[3].stu_marks+stu_log[4].stu_marks)/5;
    printf("The average marks of the five students: %.2f",avg_marks);
    return 0;
}