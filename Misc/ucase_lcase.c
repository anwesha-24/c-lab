#include<stdio.h>
void main()
{
    char a;
    printf("Enter alphabet: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        a=a-32;
        printf("Uppercase alphabet: %c",a);
    }
    else
        printf("The alphabet is already in uppercase");
}