#include<stdio.h>
void marks(int *arr,float *s,float *avg);
void main()
{
    int a[]={94,91,90,92,99};
    float sum=0,average=0;
    marks(&a,&sum,&average);
    printf("Total= %f\nAverage= %f",sum,average);
}
void marks(int *arr,float *s,float *avg)
{
    int i;
    for(i=0;i<5;i++){
        *s+=*(arr+i);
    }
    *avg= *s/5;
}
