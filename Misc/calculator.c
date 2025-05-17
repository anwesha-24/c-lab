#include<stdio.h>
void main()
{
    int n1,n2;
    float res;
    char a,s,m,d,opr;
    printf("Enter operation: a:add, s:sub, m:mul, d:div ");
    scanf("%c",&opr);
    printf("Enter nos. a nd b: ");
    scanf("%d%d",&n1,&n2);
    switch(opr)
    {
        case 'a':
            opr='+';
            res=n1+n2;
            break;
        case 's':
            opr='-';
            res=n1-n2;
            break;
        case 'm':
            opr='*';
            res=n1*n2;
            break;
        case 'd':
            opr='/';
            res=((float)n1/(float)n2);
            break;
        default:
            printf("Enter an appropriate operator");
    }
    printf("%d%c%d=%0.2f\n",n1,opr,n2,res);
}