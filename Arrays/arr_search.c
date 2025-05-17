#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i,key,found=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    if(n>10){
        printf("Too many nos.");
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        printf("Enter the key to be searched: ");
        scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at %d",i);
            found=1;
        }
    }
    if(found==0){
        printf("Not found");
    }
}