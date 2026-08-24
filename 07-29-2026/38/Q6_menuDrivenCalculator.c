#include<stdio.h>
float add(float x,float y){
    return x+y;
}
float sub(float x,float y){
    return x-y;
}
float mul(float x,float y){
    return x*y;
}
float div(float x,float y){
    return x/y;
}
int main(){
    float x,y,result;
    char operators,doAgain;
    do{
        printf("Enter the operator(+,-,*,/):");
        scanf(" %c",&operators);
        printf("Enter first number:");
        scanf(" %f",&x);
        printf("Enter second number:");
        scanf(" %f",&y);
        switch(operators){
        case '+':
            result=add(x,y);
            printf("%.2f",result);
            break;
        case '-':
            result=sub(x,y);
            printf("%.2f",result);
            break;
        case '*':
            result=mul(x,y);
            printf("%.2f",result);
            break;
        case '/':
             if(y==0){
                printf("division by 0 is not possible");
            }else{
                result=div(x,y);
                printf("%.2f",result);
            }
            break;
        default:
            printf("invalid operator");
    }
        printf("\nWant to do again? (y or n):");
        scanf(" %c",&doAgain);
    }while((doAgain=='y'||doAgain=='Y'));
    if(doAgain=='y'||doAgain=='Y'){
        printf("The result is: %.2f",result);
    }
    else{
        printf("Thank you! your calculation ends here.");
    }
    return 0;
}
