#include<stdio.h>
long factorial(int n);
void main()
{
    int num=5;
    long fact=1;
    printf("%d!= %ld",num,factorial(num));
}
long factorial(int n)
{
    int i;
    long result=1;
    for(i=1;i<=n;i++){
        result=result*i;
    }
    return result;
}