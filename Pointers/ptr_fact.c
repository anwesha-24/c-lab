#include<stdio.h>
void main()
{
    long n=5,i,b,fact=1,*ptr;
    b=n;
    ptr=&fact;
    for(i=1;i<=n;i++){
        *ptr=*ptr*i;
    }
    printf("%ld!= %ld",b,*ptr);
}