#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}