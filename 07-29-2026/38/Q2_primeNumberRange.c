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
    int num,l,i;
    printf("Enter the first number:");
    scanf("%d",&num);
    printf("Enter the last number:");
    scanf("%d",&l);
    printf("The prime numbers are:");
    for(i=num;i<=l;i++){
        if(primeNum(i)){
            printf("%d ",i);
        }else{
            continue;
        }
    }
    return 0;
}
