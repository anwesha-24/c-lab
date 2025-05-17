#include<stdio.h>
int main(){
    int m[5],i,s=0;
    float per;
    printf("Enter the marks for 5 students:\n");
    for(i=0;i<5;i++){
        scanf("%d",&m[i]);
        s+=m[i];
    }
    per=(float)s/5;
    printf("Total Marks: %d\n",s);
    printf("Percentage: %.2f\n",per);
    return 0;
}