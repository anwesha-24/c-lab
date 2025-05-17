#include<stdio.h>
void main()
{
    int n=20,*ptr;
    ptr=&n;
    printf("Using variable n:\n");
    printf("Variable value: %d\n",n);
    printf("Variable address: %u\n",&n);

    printf("Using pointer variable:\n");
    printf("Variable value: %d\n",*ptr);
    printf("Variable address: %u\n",ptr);
}