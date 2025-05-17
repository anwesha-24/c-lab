#include<stdio.h>
void main(){
    long int i,j,n,sum=0;
    printf("Enter n: ");
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        if (i>1){
            printf("(");
        }
        for(j=1;j<=i;j++){
            printf("%ld",j);
            if (j<i){
                printf("+");
            }
        }
        if (i>1){
            printf(")");
        }
        if (i<n){
            printf("+");
        }
    }
}