#include<stdio.h>
void main()
{
    char str[100];
    char *ptr;
    int c;
    printf("Enter a string:");
    gets(str);
    ptr=str;
    c=0;
    while(*ptr!="0"){
        if(*ptr=="A"||*ptr=="E"||*ptr=="I"||*ptr=="O"||*ptr=="U"||*ptr=="a"||*ptr=="e"||*ptr=="i"||*ptr=="o"||*ptr=="u"){
            c++;
        }
        ptr++;                                                              
    }
    printf("Total no.of vowels= %d",c);
}