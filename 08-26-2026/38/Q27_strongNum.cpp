#include<iostream>
int main(){
    using namespace std;
    int n,i,temp,factSum=0;
    cout<<"Enter a number to check if its a Strong number: ";
    cin>>n;
    int toCheck=n;
    while(n>0){
        temp=n%10;
        int fact=1;
        for(i=1;i<=temp;i++){
            fact=fact*i;
        }
        factSum=factSum+fact;
        n=n/10;
    }
    if(toCheck==factSum){
        cout<<"The given number is a Strong number";
    }else{
        cout<<"The given number is NOT a Strong number";
    }
    return 0;

}

