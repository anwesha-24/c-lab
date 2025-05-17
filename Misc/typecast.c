#include<stdio.h>
int main()
{
    int n1,n2;
    float n3;
    printf("Enter two integers:");
    scanf("%d%d",&n1,&n2);
    n3=n1/n2;
    printf("The division of %d and %d is %lf",n1,n2,n3);
    return 0;
}