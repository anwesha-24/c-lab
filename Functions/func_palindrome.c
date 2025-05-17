#include<stdio.h>
int rev(int);
void main()
{
    int num;
    printf("Enter no.: ");
    scanf("%d",&num);
    if(rev(num)==1){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
int rev(int n)
{
    int d,reversed=0,original;
    original=n;
    while(n!=0){
        d=n%10;
        reversed=reversed*10+d;
        n/=10;
    }
    if(original==reversed){
        return 1;
    }
    else{
        return 0;
    }
}