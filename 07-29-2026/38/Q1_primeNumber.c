#include<stdio.h>
int primeNum(int n){
    int i;
    if(n<=1){
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
