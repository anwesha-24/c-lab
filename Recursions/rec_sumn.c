#include<stdio.h>
int sum(int n);
void main()
{
    int num;
    printf("Enter no.: ");
    scanf("%d",&num);
    printf("Sum= %d",sum(num));    
}
int sum(int n)
{
    if(n!=0){
        return n+sum(n-1);
    }
    else{
        return n;
    }
}