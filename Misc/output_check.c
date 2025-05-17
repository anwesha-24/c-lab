#include<stdio.h>
int main()
{
    int x,y;
    x=((1==2)!=3);
    y=(1>2+3&&4);
    printf("x is %d\n",x);
    printf("y is %d",y);
    return 0;
}