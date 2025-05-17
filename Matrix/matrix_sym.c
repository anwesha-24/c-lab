#include<stdio.h>
void main()
{
    int m1[3][3]={{1,2,3},{2,6,4},{3,4,7}},m2[3][3],i,j,flag;
    printf("Entered matrix->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m1[i][j]);
            m2[j][i]=m1[i][j];
        }
        printf("\n");
    }
    flag=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(m1[i][j]!=m2[i][j]){
                flag=0;
            }
        }
    }
    if(flag){
        printf("Symmetric matrix");
    }
    else{
        printf("Not a symmetric matrix");
    }
}