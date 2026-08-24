#include<stdio.h>
void fibonacci(int n){
    int i=1,a=0,b=1,c;
    while(i<=n){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}
int main(){
    int n;
    printf("Enter the number of terms to get the fibonacci series:");
    scanf("%d",&n);
    printf("The fibonacci series till %d terms are: ",n);
    fibonacci(n);
    return 0;
}
