#include<stdio.h>
void main()
{
    long int n,rev=0,d,revdig;
    printf("Enter no.: ");
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    while (rev!=0)
    {
        revdig=rev%10;
        switch(revdig)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        rev=rev/10;
    }
}