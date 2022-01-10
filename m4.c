#include<stdio.h>
int main()
{
	int number=4;
	int k=1;
	while(k<=number)
	{
		int x= 1;
		while(x<=number-k+1)
		{
			printf("*");
			
			x++;
		}
		
		
		k++;
		printf("\n");
	}
}
