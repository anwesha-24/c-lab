#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[100];
    char gender;
    float marks;   
};
void main()
{
    struct student s;
        s.roll=22053757;
        strcpy(s.name,"Anwesha Roy");
        strcpy(s.gender,"F");
        s.marks=90;
        printf("Student details->\n");
        printf("Roll no.= %d\nName= %s\nGender= %c\nMarks= %f",s.roll,s.name,s.gender,s.marks);
}