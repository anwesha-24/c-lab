#include<stdio.h>
void main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9},i;
    a[6]=a[0];
    a[7]=a[1];
    a[8]=a[2];
    for(i=0;i<=9;i++){
        printf("%d\t",a[i]);
    }
}