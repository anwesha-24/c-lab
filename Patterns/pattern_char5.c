#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}