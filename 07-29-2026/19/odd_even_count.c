#include<stdio.h>

int even_odd(int n) {
    if(n%2 == 0)
        return 1;
    else 
        return 0;
}

int main() {
    int n,i;
    printf("Enter the limit to be checked : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(even_odd(i)==1)
            printf("%d is even number.\n",i);
        else 
            printf("%d is odd number.\n",i);
    }
    return 0;
}