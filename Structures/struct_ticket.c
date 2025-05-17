#include<stdio.h>
struct passenger
{
    char name[50];
    int age;
    char gender;
    int snum;
};
void main()
{
    int i,n;
    struct passenger p[1];
    printf("Enter details->\n");
    for(i=0;i<1;i++){
        printf("Name: ");
        scanf("%s",&p[i].name);
        printf("Age: ");
        scanf("%d",&p[i].age);
        printf("Gender: ");
        scanf("%c",&p[i].gender);
        printf("Seat no.: ");
        scanf("%d",&p[i].snum);
    }
    printf("Passenger no.: ");
    scanf("%d",&n);
    --n;
    for(int i=0;i<n;i++){
        if(i==n){
            printf("Passenger %d\n",i+1);
            printf("Name: %s\n",p[i].name);
            printf("Age:\n",p[i].age);
            printf("Gender:\n",p[i].gender);
            printf("Seat no.:\n",p[i].snum);
        }
    }
}