#include <stdio.h>

int *f(void)
{
    int v=5;
    printf("in f : &v=%u v=%d\n",&v,v);
    return &v;
}
 main()
{
    int *p;
    p=f();
    printf("in main : p=%u *p=%d\n",p,*p);
}


