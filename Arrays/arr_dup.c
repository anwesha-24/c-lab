#include<stdio.h>
void main()
{
    int a[6],i,j,k,size=6;
    for(i=0;i<size;i++){
        printf("%d-> ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=j;k<size;k++){
                        a[k]=a[k+1];}
                size--;
                j--;
                }
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}