#include<stdio.h>
struct database{
    int age;
    int id;
    float salary;   
}emp,employee;
void main()
{
    employee.age=22;
    employee.id=4567;
    employee.salary= 24000.00;
    printf("Age= %d\nId= %d\nSalary= %f\n",emp.age,emp.id,emp.salary);
}