#include<stdio.h>
int main()
{
	int input[6],i=0,ans=0;
	int size=6;
	int nochecking=3;
	input[0]=4;
	input[1]=3;
	input[2]=4;
	input[3]=2;
	input[4]=5;
	input[5]=3;
	while(i< size)
	{
		if(i!= nochecking)
		{
			ans=ans+input[i];
		}
		
		i++;
	}
	printf("ans%d\n",ans);
}
