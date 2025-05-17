#include<stdio.h>
void main()
{
    int i,j,n,s=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s=s+j;
        }
    }
    printf("Sum= %d",s);
}