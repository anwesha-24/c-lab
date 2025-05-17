#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("Enter size= ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    ptr=(int *)malloc(2*sizeof(int));
    for(i=0;i<2;i++){
        printf("%d\n",ptr[i]);
    }
}