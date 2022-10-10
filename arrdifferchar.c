#include <stdio.h>

int main()
{
    char a[10] = {'a','A','1','&','r','R','%','6','q','7'};
    int i,n,alpha=0,num=0,special=0;
    n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    
     printf("%c",a[i]);
    for(i=0;i<n;i++)
    {
        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
        alpha++;
        else if((a[i]>='0')&&(a[i]<='9'))
        num++;
        else
        special++;
    }
    printf("\nAlphabates = %d\n",alpha);
    printf("numbers = %d\n",num);
    printf("special characters = %d\n",special);
}

