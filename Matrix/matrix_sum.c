#include<stdio.h>
void main()
{
    int m1[3][3]={{1,2,3},{4,5,6},{7,8,9}},m2[3][3]={{2,4,6},{8,10,12},{14,16,18}},s[3][3],i,j;
    printf("1st marix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the matrices->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            s[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}