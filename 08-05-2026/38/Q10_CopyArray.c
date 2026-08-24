#include<stdio.h>
int main(){
    int arr1[50],arr2[50],n,i;
    printf("Enter total number of element in your array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d index number:",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("Copied array is:");
    for(i=0;i<n;i++){
        printf(" %d",arr2[i]);
    }
    return 0;
}
