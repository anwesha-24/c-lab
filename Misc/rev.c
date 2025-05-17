#include<stdio.h>
void main()
{
    int r,a;
    printf("Enter no.: ");
    scanf("%d",&a);
    if(a/1000==0){
        r=(a%10)*100+((a/10)%10)*10+(a/100);
        printf("Result= %d",r);
    }
    else{
        printf("Invalid input");
    }
}