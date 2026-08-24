#include<stdio.h>
int primeNum(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }else{
            return 1;
        }
    }
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(primeNum(n)){
        printf("It is a prime number");
    }else{
        printf("Not a prime number");
    }
    return 0;
}
