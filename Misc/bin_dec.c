#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,dv=0;
    printf("Enter the binary no.: ");
    scanf("%d",&n);
    while(n>0)
    {
        dv=dv+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }
    printf("Decimal no.: %d",dv);
}