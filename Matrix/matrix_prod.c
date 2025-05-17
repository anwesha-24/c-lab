#include<stdio.h>
void main()
{
    int m1[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}},m2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}},pro[3][3],i,j,k;
    printf("1st matrix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix->\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("Resultant matrix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            pro[i][j]=0;
            for(k=0;k<4;k++){
                pro[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",pro[i][j]);
        }
        printf("\n");
    }
}   