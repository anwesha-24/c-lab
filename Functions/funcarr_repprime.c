#include<stdio.h>
int nxtpr(int);
void main()
{
    int a[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            a[i]=nxtpr(a[i]);
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
int nxtpr(int n)
{
    int i,j,flag=0;
    for(i=n+1;i<=100;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}