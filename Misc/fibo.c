#include<stdio.h>
void main()
{
    int n,i,t1=0,t2=1,nt;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for (i=1;i<=n;++i)
    {
        printf("%d,",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
}