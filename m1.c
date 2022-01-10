#include<stdio.h>
int main()
{
	int a,b,sum;
	a=1234;
	
	
	b=a%10;
	a=a/10;
	sum=sum+b;
	
	b=a%10;
	a=a/10;
	sum=sum+b;
	
	b=a%10;
	a=a/10;
	sum=sum+b;
	
	b=a%10;
	a=a/10;
	sum=sum+b;
	printf("ans%d",sum);
}
