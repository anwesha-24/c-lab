#include<stdio.h>
int swap(int x,int y);
void main()
{
    int a=20;
    int b=40;
    printf("Before swapping: a= %d and b= %d\n",a,b);
    swap(a,b);
}
int swap(int x,int y)
{
    int temp;
    temp=y;
    y=x;
    x=temp;
    printf("After swapping: a= %d and b= %d",x,y);
}
