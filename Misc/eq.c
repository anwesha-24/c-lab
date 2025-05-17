#include<stdio.h>
void main()
{
    int n,i;
    float x,y;
    printf("Enter x and n: ");
    scanf("%f%d",&x,&n);
    y=1.0;
    for(i=1;i<=n;i++)
    {
        y=y*x;
    }
    printf("x= %f, n= %d\nx to the power n= %f",x,n,y);
}