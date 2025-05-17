#include<stdio.h>
struct emp
{
    char grade;
    int basic;
    float allowance;
};
void main()
{
    struct emp shanaya={'b',6500,812.5};
    struct emp kriti;
    kriti=shanaya;
    printf("Kriti's grade is %c, Basic is %d, Allowance is %f",kriti.grade,kriti.basic,kriti.allowance);
}