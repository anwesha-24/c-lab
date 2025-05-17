#include<stdio.h>
void main()
{
    int i=0;
    char s[50];
    printf("Enter string: ");
    gets(s);
    while(s[i]!="\O")
    {
        if(s[i]=='e'){
            s[i]='E';
        }
        i++;
    }
    printf("String after replacing: ");
    printf("%s",s);
}