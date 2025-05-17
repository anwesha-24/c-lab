#include<stdio.h>
void main()
{
    int a=30,b=15,c=20,*x,*y,*z,max;
    x=&a;
    y=&b;
    z=&c;
    printf("\na= %d",*x);
    printf("\nb= %d",*y);
    printf("\nc= %d",*z);
    if(*x>*y){
        max=*x;
    }
    else{
        max=*y;
    }
    if(*z>max){
        max=*z;
    }
    printf("Max= %d",max);
}