#include<stdio.h>
void main()
{
    int i,n,max;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d nos.: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("Max=%d",max);
}