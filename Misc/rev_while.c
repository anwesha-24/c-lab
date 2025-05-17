#include<stdio.h>
void main()
{
    long int n,rev=0,d;
    printf("Enter no.: ");
    scanf("%d",&n);
    while (n!=10)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reverse no.= %d",rev);
}