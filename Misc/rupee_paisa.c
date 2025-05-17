#include<stdio.h>
int main()
{
    int p1,p2,r;
    printf("Enter paisa: \n");
    scanf("%d",&p1);
    r=p1/100;
    p2=p1%100;
    printf("%d paisa and %d rupee",r,p2);
    return 0;
}