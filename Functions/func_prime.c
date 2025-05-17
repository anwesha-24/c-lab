#include<stdio.h>
void prime(int);
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,j,c;
    for(i=1;i<=n;i++){
        c=0;
        for(j=2;j<=i;j++){
            if(i%j==0){
                c++;
                break;
            }
        }
    }
    if(c==0 && i!=1){
        printf("%ld ",i);
    }
}