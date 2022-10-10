#include <stdio.h>

int main()
{
    int a[10];
    int i,n,max,min,max_index=0,min_index=0;
    n=sizeof(a)/sizeof(a[0]);
    printf("Input 10 integers :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
        }
    }
    printf("max number = %d at index %d\n",max,max_index);
    printf("min number = %d at index %d\n",min,min_index);
}

 
