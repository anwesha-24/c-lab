#include<stdio.h>
void main()
{
    int a[8],i,lar,sec,temp;
    for(i=0;i<8;i++)
    {
        printf("a[%d]-> ",i);
        scanf("%d",&a[i]);
    }
    lar=a[0];
    sec=a[1];
    for(i=2;i<8;i++)
    {
        if(a[i]>lar){
        temp=lar;
        lar=a[i];
        sec=temp;}
        else if(a[i]>sec){
        sec=a[i];}
    }
    printf("Second largest-> %d",sec);
}