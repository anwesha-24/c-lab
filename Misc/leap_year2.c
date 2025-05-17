#include<stdio.h>
void main()
{
    int i,a,b;
    a=2000;
    b=3000;
    for(i=2000;i<3000;i++)
    {
        if((i%4==0) && (i%100!=0) || (i%400==0))
        {
            if(i>a)
            a=i;
            if(i<b)
            b=i;}
    }
    printf("First leap year is %d and last leap year is %d",b,a);
}