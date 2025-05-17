#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        k=i%2;
        for(j=5;j>=i;j--)
        {
            printf("%d",k);
            k=(k+1)%2;
        }
        printf("\n");
    }
}