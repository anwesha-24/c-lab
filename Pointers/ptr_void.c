#include<stdio.h>
void main()
{
    int a=5;
    float b=3.14;
    void *vp;
    vp=&a;
    printf("\na= %d",*((int *)vp));
    vp=&b;
    printf("\nb= %f",*((float *)vp));
}