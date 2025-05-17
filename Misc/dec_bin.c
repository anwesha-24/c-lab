#include<stdio.h>
void main()
{
    int arr[10],n,i,j;
    printf("Enter no. to convert to binary: ");
    scanf("%d",&n);
    printf("Binary no.of %d is ",n);
    for(i=0;n>0;i++){
        arr[i]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
}