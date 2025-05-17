#include<stdio.h>
int main()
{
    int n,var1;
    n=20;
    printf("Given value: %d ",n);
    var1=(n++,n);
    printf("New value: %d",var1);
    return 0;
}