#include<stdio.h>
int main()
{
    int x;
    printf("Enter no.: \n");
    scanf("%d",&x);
    if (x>0)
    {
        printf("x is positive\n");
    }    
    else if (x==0)
    {   
        printf("x is 0");
    }    
    else
    {    
        printf("x is negative");
    }
    return 0;
}