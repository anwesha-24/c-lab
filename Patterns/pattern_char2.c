#include<stdio.h>
void main()
{
    int i,j,n=4;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}