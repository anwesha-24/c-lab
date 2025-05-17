#include<stdio.h>
void main()
{
    int n,rev=0,i,d;
    printf("Enter no.: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    printf("Reverse no.: %d",rev);
    printf("\nFactors: ");
    for(i=1;i<=rev;i++)
    {
        if(rev%i==0)
        printf("%d ",i);
    }
}