#include<stdio.h>
struct emp
{
    char grade;
    int basic;
    float allowance;
};
void main()
{
    struct emp shanaya={'b',5750,818.7};
    struct emp kriti={'b',6500,812.5};
    if(shanaya.grade!=kriti.grade){
        printf("Both are employed on different grades");
    }
    else if((shanaya.basic+shanaya.allowance)>(kriti.basic+kriti.allowance)){
        printf("Shanaya is senior and her total remuneration is Rs %f",(shanaya.basic+shanaya.allowance));
    }
    else if((shanaya.basic+shanaya.allowance)==(kriti.basic+kriti.allowance)){
        printf("Both get the same total remuneration of Rs %f",(shanaya.basic+shanaya.allowance));
    }
    else{
        printf("Kriti is senior and her total remuneration is Rs %f",(kriti.basic+kriti.allowance));
    }
}