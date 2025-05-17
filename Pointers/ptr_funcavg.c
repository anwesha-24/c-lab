#include<stdio.h>
double avg(int *,int);
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printf("Average= %f",avg(a,10));
}
double avg(int *arr,int n)
{
    int i,s=0;
    double b;
    for(i=0;i<n;i++){
        s+=arr[i];
    }
    b=(double)s/n;
    return b;
}