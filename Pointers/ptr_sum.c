#include<stdio.h>
void main()
{
    int a,b,*x,*y,sum;
    printf("Enter two nos.: ");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    sum=*x+*y;
    printf("Sum= %d",sum);
}