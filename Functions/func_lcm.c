#include<stdio.h>
int lcm(int,int);
void main()
{
    int x,y;
    printf("Enter 2 nos.: ");
    scanf("%d%d",&x,&y);
    printf("LCM(%d,%d)= %d",x,y,lcm(x,y));
}
int lcm(int x,int y)
{
    int res;
    res=(x>y)?x:y;
    while(1){
    if(res%x==0 && res%y==0){
        break;
    }
    ++res;
    }
    return res;
}