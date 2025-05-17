#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,*ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("Enter 5 nos.:");
    for(i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter 8 nos.:");
    for(i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<8;i++){
        printf("Number %d is %d\n",i,ptr[i]);
    }
}