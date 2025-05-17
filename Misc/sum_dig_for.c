#include<stdio.h>
int main()
{
    int n,s=0,r;
    printf("Enter no.:");
    scanf("%d",&n);
    for(;n!=0;n/=10)
    {
        r=n%10;
        s+=r;
    }
    printf("Sum of the digits:%d",s);
    return 0;
}