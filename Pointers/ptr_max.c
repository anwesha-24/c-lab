#include<stdio.h>
void main()
{
    int n1,n2,*a,*b,max;
    printf("Enter two nos.: ");
    scanf("%d%d",&n1,&n2);
    a=&n1;
    b=&n2;
    max=*a;
    if(*b>max){
        max=*b;
    }
    else{
        max=*a;
    }
    printf("Largest no.: %d",max);
}