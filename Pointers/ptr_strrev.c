#include<stdio.h>
void main()
{
    char s[100];
    char *p;
    p=s;
    int len,i;
    printf("Enter a string: ");
    gets(s);
    len=strlen(s);
    printf("Reverse string: ");
    for(i=len;i>=0;i--){
        printf("%c",*(s+i));
    }
}