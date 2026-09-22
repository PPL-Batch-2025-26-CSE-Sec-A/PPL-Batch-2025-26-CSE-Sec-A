#include<stdio.h>
int main(){
    int arr[50],size,n,insert,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("At which index you want to insert:");
    scanf("%d",&n);
    printf("Now enter the element you want to insert at index %d:",n);
    scanf("%d",&insert);
    for(i=size-1;i>=n;i--){
        arr[i+1]=arr[i];
    }
    arr[n]=insert;
    printf("Array after insertion ");
    for(i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
