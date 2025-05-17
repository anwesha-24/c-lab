#include<stdio.h>
void main()
{
    int a[8],i;
    long int num;
    printf("Enter your roll no.->\n");
    scanf("%ld",&num);
    for(i=0;i<8;i++){
        a[i]=num%10;
        num/=10;
    }
    printf("Roll no. in array form is-> ");
    for(i=7;i>=0;i--){
        printf("%d ",a[i]);
    }
}