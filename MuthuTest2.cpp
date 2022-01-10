#include<stdio.h>

int main(){
	int a,b,sum=0;
	a = 5432;
	do
	{
	b = a%10;
	a = a/10;
	sum = sum+b;
	}while(a!=0);
	
	printf("--%d",sum);
	
	
	return 0;
}
