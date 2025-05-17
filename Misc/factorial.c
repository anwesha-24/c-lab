#include<stdio.h>
void main()
{
    int n,i,c=1;
    printf("Enter no.: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    printf("Factorial of %d is %d",n,c);
}