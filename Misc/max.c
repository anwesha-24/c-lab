#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter 3 nos.: ");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Largest no.: %d",max);
}