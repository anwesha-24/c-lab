#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i*i;
    }
    printf("Sum= %d",s);
}