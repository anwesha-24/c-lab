#include<stdio.h>
void sum(int a[],int num,int s);
void main()
{
    int i,a[10],num,s=0;
    printf("No. of elements\n");
    scanf("%d",&num);
    printf("Enter elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    sum(a,num-1,s);
}
void sum(int a[],int num,int s)
{
    if(num>=0){
        if(a[num]%2==0){
            s+=a[num];
        }
        sum(a,num-1,s);
    }
    else{
        printf("Sum= %d",s);
    }
}