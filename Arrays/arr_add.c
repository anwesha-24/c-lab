#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Original array:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",a[i]);
    }
    printf("New array:\n");
    for(i=0;i<5;i++){
        a[i]+=2;
        printf("%d ",a[i]);
    }
}