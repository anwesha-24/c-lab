#include<stdio.h>
void main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);
    if ((m>=90) && (m<=100))
    {
        printf("Grade O");
    }
    else if ((m>=80) && (m<=89))
    {
        printf("Grade E");
    }
    else if ((m>=70) && (m<=79))
    {
        printf("Grade A");
    }
    else if ((m>=60) && (m<=69))
    {
        printf("Grade B");
    }
    else if ((m>=50) && (m<=59))
    {
        printf("Grade C");
    }
    else if ((m>=40) && (m<=49))
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}