#include<stdio.h>
void main()
{
    int n,i,j,c=0;
    printf("Enter range: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            c++;
            break;
        }
        if((c==0) && (i!=1))
        {
            printf("%d\n",i);
            c=0;
        }
    }
}