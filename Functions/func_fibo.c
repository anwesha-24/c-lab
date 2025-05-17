#include<stdio.h>
int fib(int);
void main()
{
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("Value of the sequence: %d ",fib(n));
}
int fib(int n)
{
    int i,t1=0,t2=1,nt;
    if(n==0 || n==1){
        return(n-1);
    }
    else{
        for(i=3;i<=n;i++){
            nt=t1+t2;
            t1=t2;
            t2=nt;
        }
        return nt;
    }
}