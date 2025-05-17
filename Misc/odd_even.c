#include<stdio.h>
int main()
{
    int x;
    printf("Enter no.: ");
    scanf("%d",&x);
    if (x%2==0)
        printf("x is even\n");
    else
        printf("x is odd");
    return 0;
}