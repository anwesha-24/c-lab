#include<stdio.h>
void sort(int num[]);
void main()
{
    int a[10],i;
    printf("Enter elements: ");
    for(i=0;i<10;++i){
        scanf("%d",&a[i]);
    }
    sort(a);
}
void sort(int num[])
{
    int i,j,temp;
    for(i=0;i<10;++i){
        for(j=0;j<9-i;j++){
            if(num[j]>num[j+1]){
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;}
        }
    }
    printf("Nos. in ascending order: ");
    for(i=0;i<10;++i){
        printf("%d ",num[i]);
    }
}