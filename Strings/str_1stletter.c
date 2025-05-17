#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i,j;
    printf("Enter string: ");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(i==0 && s[i]!=" "){
            printf("%c ",s[i]);
        }
        else if(i>0 && s[i-1]==" "){
            printf("%c ",s[i]);
        }
    }
}