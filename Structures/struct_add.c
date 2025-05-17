#include<stdio.h>
struct dist
{
    int feet;
    float inch;
};
void main()
{
    struct dist d1,d2,d;
    printf("Enter data for 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("\nEnter data for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    d.feet = d1.feet+d2.feet;
    d.inch = d1.inch+d2.inch;
    if (d.inch>12.0){
        d.inch = d.inch-12.0;
        ++d.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", d.feet, d.inch);
}