#include<stdio.h>
int sumarr(int a[],int n,int i);
void main()
{
    int a[10],i,s,n=10;
    printf("Enter elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    s=sumarr(a,n,0);
    printf("Sum= %d",s);
}
int sumarr(int a[],int n,int i)
{
    if(i<n){
        return a[i]+sumarr(a,n,++i);
    }
}