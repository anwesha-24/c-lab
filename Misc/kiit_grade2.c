#include<stdio.h>
void main()
{
    int avg,b;
    char grade;
    printf("Enter average: ");
    scanf("%d",&avg);
    b=avg/10;
    switch(b)
    {
        case 10:
            grade='O';
            printf("Full marks\n");
        case 9:
            grade='O';
            break;
        case 8:
            grade='A';
            break;
        default:
            grade='F';
            printf("Failed\n");
    }
    printf("Your grade is %c\n",grade);
}