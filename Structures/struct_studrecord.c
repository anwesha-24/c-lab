#include <stdio.h>
struct student
{
    int rollno;
    char name[80];
    int marks;
};
void accept(struct student list[], int s);
void display(struct student list[], int s);
void bsortDesc(struct student list[], int s);
int main(){
    struct student data[20];
    int n;
    printf("Number of records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    printf("\nBefore sorting");
    display(data, n);
    bsortDesc(data, n);
    printf("\nAfter sorting");
    display(data, n);
return 0;
}
void accept(struct student list[80], int s)
{
    int i;
    for (i = 0; i < s; i++){
        printf("\n\nEnter data for Record #%d", i + 1);
        printf("\nEnter rollno : ");
        scanf("%d", &list[i].rollno);
        printf("Enter name : ");
        scanf("%s",list[i].name);
        printf("Enter marks : ");
        scanf("%d", &list[i].marks);
    }
}
void display(struct student list[80], int s)
{
    int i;
    printf("\n\nRollno\tName\tMarks\n");
    for (i = 0; i < s; i++){
        printf("%d\t%s\t%d\n", list[i].rollno, list[i].name, list[i].marks);
    }
}
void bsortDesc(struct student list[80], int s)
{
    int i, j;
    struct student temp;
    for (i = 0; i < s - 1; i++){
        for (j = 0; j < (s - 1-i); j++){
            if (list[j].marks < list[j + 1].marks){
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}