#include<stdio.h>
void main()
{
    int a[8],i;
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=7;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}