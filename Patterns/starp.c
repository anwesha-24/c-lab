#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter no.of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}