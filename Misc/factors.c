#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter no.: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
        printf("%d\n",i);}
    }
}