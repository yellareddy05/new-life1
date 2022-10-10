#include<stdio.h>
main()
{
	int a[10],i;
	srand(getpid());
	for(i=0;i<10;i++)
	a[i]=rand()%101;
	for(i=0;i<10;i++)
		printf("	%d",	a[i]);
}

