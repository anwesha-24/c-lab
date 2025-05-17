#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=1;
    float s=0;
    printf("Enter range: ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++){
        s+=((float)(pow(c,2))/(float)(pow(c,3)));
        c+=2;
    }
    printf("Sum= %f",s);
}