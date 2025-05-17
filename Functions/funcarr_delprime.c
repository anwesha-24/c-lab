#include<stdio.h>
int isprime(int);
void main()
{
    int i,j,len;
    int a[]={100,200,31,13,97,10,20,4};
    for(i=0;i<len;i++){
        if(isprime(a[i])){
            for(j=i;j<len;j++){
                a[j]=a[j+1];
            }
            i--;
            len--;
        }
    }
    for(i=0;i<len;i++){
        printf("%d ",a[i]);
    }
}
int isprime(n)
{
    int i,flag=0;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    }
}