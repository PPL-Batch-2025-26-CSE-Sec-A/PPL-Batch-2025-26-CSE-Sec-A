#include<iostream>
using namespace std;
int main(){
    //declaring and initializing an array size
    int arr[7],i,j,temp;
    for(i=0;i<7;i++){
        cout<<"Enter element at "<<i<<" index: ";
        cin>>arr[i];
    }
    for(i=0;i<=6;i++){
        for(j=0;j>6-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is: ";
    for(i=6;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
