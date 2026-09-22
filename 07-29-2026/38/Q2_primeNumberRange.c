#include<stdio.h>
int primeNum(int n){
    int i;
    if(n<2){
        return 0;
    }

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,a,b;
    printf("Enter number from which you want to check for prime numbers: ");
    scanf("%d",&a);
    printf("Enter number till which you want to check for prime numbers: ");
    scanf("%d",&b);
    printf("Prime numbers are: ");
    for(i=a;i<=b;i++){
        if(primeNum(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
