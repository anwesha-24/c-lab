#include<stdio.h>
void main()
{
    int l,i;
    int n=1;
    int a[]={2,2,0,5,3,7,5,7};
    l=sizeof(a)/sizeof(a[0]);
    printf("Original roll: ");
    for(i=0;i<l;i++){
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        int j,temp;
        temp=a[l-1];
        for(j=l-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    printf("\n");
    printf("New roll: ");
    for(i=0;i<l;i++){
        printf("%d",a[i]);
    }
}