#include<stdio.h>
int main()
{
    int sec1,sec2,hr,min,t;
    printf("Enter time in seconds: ");
    scanf("%d",&sec1);
    hr=sec1/3600;
    t=sec1%3600;
    min=t/60;
    sec2=t%60;
    printf("Time is %d hours, %d minutes, %d seconds",hr,min,sec2);
    return 0;
}