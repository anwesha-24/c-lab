#include<stdio.h>
int pow(int,int);
void main()
{
    long int base,expo;
    printf("Enter base and exponent: ");
    scanf("%d%d",&base,&expo);
    printf("%ld^%ld= %ld",base,expo,pow(base,expo));
}
int pow(int x,int y)
{
    int i,power=1;
    for(i=1;i<=y;i++){
        power=power*x;
    }
    return power;
}