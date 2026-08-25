#include<stdio.h>
int main(){
    int arr[50],count=0,n,i,j,seen;
    printf("Enter total number of element in your array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d index number:",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        seen=0; 
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                seen++;
                break; 
            }
        }

        if(seen){ 
            continue;
        }

        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++; 
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d",count);
    return 0;
}
