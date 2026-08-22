#include<stdio.h>

void fibo(int n);

int main() {
    int n;
    printf("Enter the number of terms upto which you want to print : ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}

void fibo(int n) {
    int a=0, b=1, c, i;
    printf("The fibonacci series upto %d terms is : ",n);
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}