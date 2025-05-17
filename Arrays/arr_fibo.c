#include<stdio.h>
void main()
{
    int a[6],i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=6;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("Fibonacci series: ");
    for(i=0;i<6;i++)
    printf("%d ",a[i]);
}