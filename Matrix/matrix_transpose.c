#include<stdio.h>
void main()
{
    int m[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}},i,j;
    printf("Matrix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Transpose->\n");
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}