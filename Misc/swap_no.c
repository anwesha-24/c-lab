#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two nos. ");
    scanf("%d%d",&x,&y);
    x+=y;
    y=x-y;
    x=x-y;
    printf("Swapped nos. are %d and %d",x,y);
    return 0;
}