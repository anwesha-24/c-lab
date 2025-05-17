#include<stdio.h>
void main()
{
    int a,n,d,s=0;
    printf("Enter no.: ");
    scanf("%d",&n);
    for(a=n;n!=0;n=n/10)
    {
        d=n%10;
        s=s+(d*d*d);
    }
    if (s==a)
    printf("Armstrong no.");
    else
    printf("Not an Armstrong no.");
}