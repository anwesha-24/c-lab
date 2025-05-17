#include<stdio.h>
void main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,10},a,b,i;
    a=ar[1];
    ar[1]=ar[0];
    ar[0]=a;
    b=ar[3];
    ar[3]=ar[2];
    ar[2]=b;
    for(i=0;i<=9;i++)
    {
        printf("%d ",ar[i]);
    }
}