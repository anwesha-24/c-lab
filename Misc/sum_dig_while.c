#include<stdio.h>
void main()
{
    int n,s=0,d;
    printf("Enter no.: ");
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of the digits= %d",s);
}