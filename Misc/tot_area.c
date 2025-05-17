#include<stdio.h>
#include<math.h>
int main()
{
    float rad,len,wid,s1,s2,s3,semi,cir_area,rect_area,tri_area,total_area;
    printf("Enter radius: ");
    scanf("%f,&rad");
    cir_area=3.14*rad*rad;
    printf("Enter length and width: ");
    scanf("%f%f",&len,&wid);
    rect_area=len*wid;
    printf("Enter the 3 sides: ");
    scanf("%f%f%f",&s1,&s2,&s3);
    semi=(s1+s2+s3)/2;
    tri_area=sqrt(semi*(semi-s1)*(semi-s2)*(semi-s3));
    total_area=cir_area+rect_area+tri_area;
    printf("Total area of the complex is %f m^2",total_area);
    return 0;
}