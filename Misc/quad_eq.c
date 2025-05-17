#include<stdio.h>
#include<math.h>
void main()
{
    float r1,r2,r3,det,a,b,c;
    printf("Enter the values of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    det=b*b-4*a*c;
    if (det==0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("Roots are %.2f and %.2f",r1,r2);
    }
    else if (det>0)
    {
        r1=(-b+sqrt(det))/(2*a);
        r2=(-b-sqrt(det))/(2*a);
        printf("Roots are %.2f and %.2f",r1,r2);
    }
    else if (det<0)
    {
        printf("Roots are imaginary");
    }
}