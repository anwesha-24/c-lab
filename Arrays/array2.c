#include<stdio.h>
void main()
{
    int ar[5]={1,2,3,4,5},br[5],i;
    for(i=0;i<=4;i++)
    {
        br[i]=ar[i];
        printf("%d ",br[i]);
    }
}