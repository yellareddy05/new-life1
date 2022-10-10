#include<stdio.h>

int agregarnum(int a,int b)
{
	int total;

	total=a + b;
	return total;
}
int main(char argc,char *argv[])
{
	int a,b;
	int suma;
	a=4;
	b=7;

	suma = agregarnum(a,b);
	printf("suma = %d\n",suma);

	return 0;
}

