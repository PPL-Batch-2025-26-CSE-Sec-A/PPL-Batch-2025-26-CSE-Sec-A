#include<stdio.h>
void oddAndEven(int n){
    int i,count_even=0,count_odd=0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            count_even++;
        }else{
            count_odd++;
        }
    }
    printf("Total even numbers are: %d\n",count_even);
    printf("Total odd numbers are: %d",count_odd);
}
int main(){
    int n;
    printf("Enter number till how much you want to find total even and odd numbers:");
    scanf("%d",&n);
    oddAndEven(n);
    return 0;
}

