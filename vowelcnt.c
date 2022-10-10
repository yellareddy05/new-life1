#include<stdio.h>
main()
{
	int i,cnt=0;
	char a[25];
	srand(time(0));
	for(i=0;i<25;i++)
	{
		a[i]=rand()%26+97;
		printf("%c	",a[i]);
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
				cnt++;
				}
				printf("\nnumber of vowels = %d\n",cnt);
				}

