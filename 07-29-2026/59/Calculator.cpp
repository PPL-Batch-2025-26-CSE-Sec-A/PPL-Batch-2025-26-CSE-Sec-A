#include <stdio.h>
float add(float x,float y) {
    return x+y;
}

float sub(float x,float y) {
    return x-y;
}

float multiply(float x,float y) {
    return x*y;
}

float divide(float x,float y) {
    return (y!=0)?x/y:0;
}

int main() {
    int choice;
    float x,y,result;
    char again;

    do {
        printf("\nMENU");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\nEnter your option: ");
        scanf("%d",&choice);
        if (choice<1||choice>4) {
            printf("\nInvalid option! Please try again.\n");
        } else {
            printf("\nEnter x: ");
            scanf("%f",&x);
            printf("Enter y: ");
            scanf("%f",&y);
            switch (choice) {
                case 1:
                    result=add(x,y);
                    printf("\nResult = %.2f", result);
                    break;
                case 2:
                    result=sub(x,y);
                    printf("\nResult = %.2f", result);
                    break;
                case 3:
                    result=multiply(x,y);
                    printf("\nResult = %.2f", result);
                    break;
                case 4:
                    if (y==0) {
                        printf("\nError: Division by zero!");
                    }
					else {
                        result=divide(x,y);
                        printf("\nResult = %.2f", result);
                    }
                    break;
            }
        }
        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c",&again);

    } while (again=='Y'||again=='y');
    printf("\nThank you!");
    return 0;
}
