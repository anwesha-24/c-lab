#include<stdio.h>
void main()
{
    int t1=0,t2=1,nt;
    while(t1+t2<=200){
        nt=t1+t2;
        if(nt%2==0){
            printf("%d ",nt);
        }
        t1=t2;
        t2=nt;
    }
}