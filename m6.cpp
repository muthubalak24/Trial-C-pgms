#include<stdio.h>

int main()
{
	int input[6], ans=0 ,i=0,k=0;
	int size =6;
	input[0]=3;
	input[1]=6;
	input[2]=7;
	input[3]=2;
	input[4]=8;
	input[5]=4;
	while(i<size)
	{
	if(i%2 !=0)
	{
		ans=ans+input[i];
	k++;
	}
	i++;	
	}
	ans=ans/k;
	printf("ans%d\n",ans);
	return 0;
}
