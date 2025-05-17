#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two nos.: ");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("Swapped nos. are %d and %d",a,b);
    return 0;
}