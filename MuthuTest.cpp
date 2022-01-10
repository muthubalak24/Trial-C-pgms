#include<stdio.h>

int main(){
	int a,b,sum;

	a=5432;
	
	

	b = a%10;
	a = a/10;
	sum= sum+b;
	printf("1-- %d\n",sum);
	b = a%10;
	a = a/10;
	sum = sum+b;
	
	printf("2-- %d\n",sum);
	b = a%10;
	a = a/10;
	sum = sum+b;
	printf("3-- %d\n",sum);
	b = a%10;
	a = a/10;
	sum = sum+b;
	printf("4-- %d\n ",sum);

	return 0;
}
