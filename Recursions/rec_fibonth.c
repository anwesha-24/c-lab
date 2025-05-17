#include<stdio.h>
int fib(int);
void main()
{
    int n=8;
    printf("Nth term= %d",fib(n));
}
int fib(int i)
{
    if(i==0 || i==1){
        return i;
    }
    else{
        return(fib(i-1)+fib(i-2));
    }
}