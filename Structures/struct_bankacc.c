#include<stdio.h>
#include<string.h>
typedef struct bankaccount{
    int acnum;
    char name[100];
}acc;
int main(){
    acc acc1={123,"Anwesha"};
    acc acc2={234,"Shruti"};
    printf("Account no.= %d\n",acc1.acnum);
    printf("Name= %s\n",acc1.name);
    printf("Account no.= %d\n",acc2.acnum);
    printf("Name= %s",acc2.name);
    return 0;
}