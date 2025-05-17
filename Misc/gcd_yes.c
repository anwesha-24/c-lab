#include<stdio.h>
void main()
{
    int a,b,m,n,gcd;
    printf("Enter two nos.: ");
    scanf("%d%d",&a,&b);
    m=a;
    n=b;
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    gcd=b;
    printf("The GCD of %d and %d is %d",m,n,gcd);
}