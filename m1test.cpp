#include<stdio.h>
int main()
{
	int input[6], ans ,i=0;
	int size=6;
    input[0]=3;
	input[1]=6;
	input[2]=7;
	input[3]=2;
	input[4]=8;
	input[5]=4;
	while(i<size)
	{
		if(ans<input[i]){
			ans=(input[i]);
			printf("ans%d/n",ans);
		}
		i++;
	}
	
	
}
