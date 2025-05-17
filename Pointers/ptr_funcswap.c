#include<stdio.h>
void swap(int *,int *);
void main()
{
    int x=5,y=10;
    printf("Before swapping: a= %d and b= %d\n",x,y);
    swap(&x,&y);
    printf("After swapping: a= %d and b= %d\n",x,y);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}