#include<stdio.h>
void main()
{
    int n,i;
    float s=0.0;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=((float)1/(float)i);
    }
    printf("Sum= %f",s);
}