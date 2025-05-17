#include <stdio.h>
#include <stdlib.h>
void main()
{
    int N,*a,i,s=0;
    printf("\n Enter no. of elements of the array: ");
    scanf("%d",&N);
    a=(int *)malloc(N*sizeof(int));
    if(a==NULL){
        printf("\n Memory allocation unsuccessful...");
    }
    printf("Enter the array elements one by one:\n");
    for(i=0;i<N;++i){
        scanf("%d",&a[i]); 
        s+=a[i];
    }
    printf("Sum is %d",s);
}