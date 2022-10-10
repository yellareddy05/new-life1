#include<stdio.h>
main()
{
	int a[10],i,max=0;
	srand(time(0));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%d	",a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("\nmax = %d\n",max);
	printf("indexes = ");
	for(i=0;i<10;i++)
		if(a[i]==max)
			printf("	%d",i);
	printf("\n");
}



