#include<stdio.h>
void main()
{
    int i,j,n=4;
    char ch;
    for(i=1;i<=n;++i)
    {
        ch='A';
        for(j=1;j<=i;++j)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}