#include<stdio.h>
int main()
{
	int a,b,sum;
	a=2345;
	while(a!=0)
	{
	b=a%10;
	a=a/10;
	sum=sum+b;
	printf("ans%d\n",sum);
	}
}
