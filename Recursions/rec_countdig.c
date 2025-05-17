#include<stdio.h>
int countdig(int);
void main()
{
    int num;
    int c=0;
    printf("Enter no.: ");
    scanf("%d",&num);
    c=countdig(num);
    printf("No. of digits: %d",c);
}
int countdig(int n)
{
    static int count=0;
    if(n>0){
        count++;
        return countdig(n/10);
    }
    else{
        return count;
    }
}