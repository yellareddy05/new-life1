#include <stdio.h>

int main()
{
    float a[] = {12.4,2.3,4.5,6.7};
    printf("%d\n",sizeof(a)/sizeof(a[0]));

    return 0;
}

