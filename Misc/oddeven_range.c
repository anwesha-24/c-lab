#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("Even nos.: \n");
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        printf("%d\t",i);
    }
    printf("Odd nos.: ");
    for(j=1;j<=n;j++)
    {
        if(j%2!=0)
        printf("%d\t",j);
    }
}