#include<stdio.h>
int max(int n1,int n2);
void main()
{
    int a=100;
    int b=200;
    int res;
    res=max(a,b);
    printf("Max= %d",res);
}
int max(int n1,int n2)
{
    int result;
    if(n1>n2){
        result=n1;
    }
    else{
        result=n2;
    }
    return result;
}