#include<stdio.h>
struct employee{
    int age;
    int id;
    float salary;   
}emp;
void main()
{
    emp.age=22;
    emp.id=4567;
    emp.salary= 24000.00;
    printf("Age= %d\nId= %d\nSalary= %f\n",emp.age,emp.id,emp.salary);
}