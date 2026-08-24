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
        seen=0; //becomes 0 i.e false after checking whole array for i<n times
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){ //checking if that number already appeared or not
                seen++;
                break; //if yes then it breaks
            }
        }

        if(seen){ //continue to the next for loop
            continue;
        }

        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++; //checks for duplicate and increase count
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d",count);
    return 0;
}

