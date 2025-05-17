#include<stdio.h>
void main()
{
    int a[8],b[8],i;
    for(i=0;i<8;i++)
    {
        printf("%d-> ",i);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",b[i]);
    }
}