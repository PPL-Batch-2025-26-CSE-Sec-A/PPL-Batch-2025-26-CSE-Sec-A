#include<stdio.h>
#include<math.h>
int Arm(int n)
{
	int o=n,a=0,s=0,d;
	int t=n;
	while(t!=0){
		a++;
		t=t/10;
	}
	t=n;
	while(t!=0){
		d=t%10;
		s=s+pow(d,a);
		t=t/10;
	}
	if(s==o)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(Arm(n)){
		printf("%d is an Armstrong number.",n);
	}
	else{
		printf("%d is not an Armstrong number.",n);
	}
	return 0;
}
