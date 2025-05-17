#include<stdio.h>
float circle(int,float *,float *);
void main()
{
    int r;
    float per=1,ar=1;
    printf("Enter radius: ");
    scanf("%d",&r);
    circle(r,&per,&ar);
    printf("Perimeter= %f\nArea= %f\n",per,ar);
}
float circle(int r,float *p,float *a)
{
    *p=2*3.14*r;
    *a=3.14*r*r;
}