#include<stdio.h>
long fact(int);
void main()
{
    int n=5;
    printf("%d!= %ld",n,fact(n));
}
long fact(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}