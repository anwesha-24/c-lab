#include<stdio.h>
int main()
{
    int n,i,test=1;
    printf("Enter a no.: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            test=0;
            break;
        }
    }
    if(test)
    {
        printf("%d is a prime no.\n",n);
    }
    else
    {
        printf("%d is not a prime no.\n",n);
    }
    return 0;
}
