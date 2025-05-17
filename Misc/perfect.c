#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter no.: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if(c==n)
        printf("Perfect no.");
    else 
        printf("Not a perfect no.");
    return 0;
}