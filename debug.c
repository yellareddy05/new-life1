#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;
	char *dia[7] = {
		"lunes",
		"martes",
		"miercoles",
		"jueves",
		"viernes",
		"sabado",
		"domingo",
	};

	for(i=0;i<10;i++)
	{
		printf("day[%d] = %s\n",i, dia[i]);

	}
	return 0;
}

//gdb debug

