#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter nos.: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Odd nos.: ");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2!=0)
        printf("%d ",a[i]);
    }
    printf("Even nos.: ");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        printf("%d ",a[i]);
    }
}