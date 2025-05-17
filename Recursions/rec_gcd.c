#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b;
    printf("Enter two nos.: ");
    scanf("%d%d",&a,&b);
    printf("GCD(%d,%d)= %d",a,b,hcf(a,b));
}
int hcf(int n1,int n2)
{
    if(n2!=0){
        return(hcf(n2,n1%n2));
    }
    else{
        return n1;
    }
}