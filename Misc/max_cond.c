#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    c=a>b?a:b>a?b:-1;
    if (c==1)
    {
        printf("a==b");
    }
    else
    {
        printf("%d",c);
    }
}