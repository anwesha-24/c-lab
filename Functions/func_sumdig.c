#include<stdio.h>
int sum(int);
void main()
{
    int n=1234;
    printf("Sum of the digits: %d",sum(n));
}
int sum(int n)
{
    int d,s=0;
    while(n!=0){
        d=n%10;
        s+=d;
        n/=10;
    }
    return s;
}