#include<stdio.h>
#include<math.h>
//function for checking armstrong number
int armstrongNumber(int num){
    int count_digit=0,isArmstrong=0,moduloNum;
    int numStored= num;//storing early
    while(num>0){
        num/=10;
        count_digit++;

    }

    while(numStored>0){
        moduloNum=numStored%10;
        isArmstrong+= pow(moduloNum,count_digit);
        numStored/=10;
    }
    return isArmstrong;
}

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num==armstrongNumber(num)){
        printf("%d is an Armstrong number",num);
    }else{
        printf("%d is NOT an Armstrong number",num);
    }
    return 0;
}
