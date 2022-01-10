#include<stdio.h>

int main()
{
	int b=1234, a, ans=0 ;
	while(b!=0)
{
	a=b%10;
	b=b/10;
	ans=(ans+a);
	printf("ans%d\n",ans);
	}	
	return 0;
}
