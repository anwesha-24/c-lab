#include<stdio.h>
void main()
{
    int a[3][3],i,j,s=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]-> ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix-> \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            s+=a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all the elements-> %d",s);
}