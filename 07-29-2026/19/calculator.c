//to develop a menu-driven calculator for arithmetic operations 
#include<stdio.h>

float add(float a,float b) {
    return a+b;
}

float subtract(float a,float b) {
    return a-b;
}

float multiply(float a,float b) {
    return a*b;
}

float divide(float a,float b) {
    if(b==0)
        printf("Not possible");
    else
        return a/b;
}

int main() {
    int choice;
    float a,b;
    char ch;
    printf("Menu!\n");
    do {
        printf("Enter the first number : ");
        scanf("%f",&a);
        printf("Enter the second number : ");
        scanf("%f",&b);
        printf("Enter 1 for addition.\n");
        printf("Enter 2 for subtraction.\n");
        printf("Enter 3 for multiplication.\n");
        printf("Enter 4 for division.\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Result : %f\n",add(a,b));
                break;
            case 2:
                printf("Result : %f\n",subtract (a,b));
                break;
            case 3:
                printf("Result : %f\n",multiply(a,b));
                break;
            case 4:
                printf("Result : %f\n",divide(a,b));
                break;
            default:
                printf("Wrong choice\n");
        }
        printf("Whether you want to continue (Y/N) : ");
        scanf(" %c",&ch);
    }
    while(ch=='Y' || ch=='y');
    return 0;
}