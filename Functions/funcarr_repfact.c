#include<stdio.h>
long fact(int);
void main()
{
    int a[6],i;
    long res;
    for(i=0;i<6;i++){
        printf("%d-> ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        res=fact(a[i]);
        printf("%ld ",res);
    }
}
long fact(int n)
{
    int i;
    long fact=1;
    int res;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    res=fact;
    return res;
}
