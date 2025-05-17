#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    for(i=0;i<10;i++){
        printf("%d-> ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;}
        }
    }
    printf("Sorted array-> ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
