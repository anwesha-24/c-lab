#include<stdio.h>
void main()
{
    int i,j,c=0;
    printf("Nos.are: ");
    for(i=10;i<=50;i++)
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