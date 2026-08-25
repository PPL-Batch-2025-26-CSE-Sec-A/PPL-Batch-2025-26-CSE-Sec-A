#include<iostream>

void fun(int n){
	int a=0,m=0,i;
	for(i=0;i<=n;i++){
		if(i%2==0)
			a++;
		else
			m++;
	}
	printf("no of odd=%d",m);
	printf("\nno of even=%d",a);
}
int main(){
	int n;
	scanf("%d",&n);
	fun(n);
	return  0;
}
