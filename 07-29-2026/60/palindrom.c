#include<stdio.h>
int main(){
	int n;
	printf("Number:");
	scanf("%d",&n);
	palindrom(n);
	return 0;
}
void palindrom(int n){
	int p,m,r;
	m=n;
	while(m>0){
		r=m%10;
		p=p*10+r;
		m=m/10;
	}
	if(p==n)
		printf("%d is palindrom.",n);
	else
		printf("%d is not palindrom.",n);
}
