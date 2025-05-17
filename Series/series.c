#include<stdio.h>
void main()
{
    int n,i,nt=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",nt);
        nt=(nt*2)+1;
    }
}