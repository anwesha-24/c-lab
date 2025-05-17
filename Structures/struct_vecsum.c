#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;
};
void sum(struct vector v1,struct vector v2,struct vector s);
int main(){
    struct vector v1={5,10};
    struct vector v2={3,7};
    struct vector s={0};
    sum(v1,v2,s);
    return 0;
}
void sum(struct vector v1,struct vector v2,struct vector s){
    s.x=v1.x+v2.x;
    s.y=v1.y+v2.y;
    printf("Sum of x= %d\n",s.x);
    printf("Sum of y= %d",s.y);
}