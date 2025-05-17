#include<stdio.h>
int main()
{
   int m1,m2,m3,m4,m5;
   float avg,p;
   printf("Enter marks of five subjects: \n");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   avg=(m1+m2+m3+m4+m5)/5.0;
   p=((m1+m2+m3+m4+m5)/500.0)*100.0;
   printf("Average is %f\n",avg);
   printf("Percentage is %f",p);
   return 0; 
}