#include<stdio.h>
int main()
{
	int number=4;
	int k=1;
	
	while(k<=number)
	{
		int x=1;
		while(x<=k)
		{
			printf("*");
			
			x++;
		}
		
		k++;
		printf("\n");
	}
}
