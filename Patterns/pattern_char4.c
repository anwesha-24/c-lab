#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}