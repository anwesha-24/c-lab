#include<stdio.h>
int gcd(int,int);
void main()
{
    int n1,n2;
    printf("Enter nos.: ");
    scanf("%d%d",&n1,&n2);
    if(n1!=n2){
        printf("GCD(%d,%d)= %d",n1,n2,gcd(n1,n2));
    }
    else if(n1=n2){
        printf("GCD(%d,%d)= %d",n1,n2,n1);
    }
}
int gcd(int a,int b)
{
    int t;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}