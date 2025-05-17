#include<stdio.h>
void main()
{
    int h1,h2,h3,m1,m2,m3,s1,s2,s3,m,s;
    printf("Enter time1 ");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Enter time2 ");
    scanf("%d%d%d",&h2,&m2,&s2);
    s3=(s1+s2)%60;
    s=(s1+s2)/60;
    m3=(m1+m2+s)%60;
    m=(m1+m2+s)/60;
    h3=h1+h2+m;
    printf("Sum is %dhr:%dmin:%dsec",h3,m3,s3);
}