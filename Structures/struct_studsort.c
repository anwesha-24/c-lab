#include <stdio.h>
struct stud {
    int roll;
    char dept_code[25];
    float cgpa;
};
int main() {
    struct stud class[100], t;
    int j, i, n;
    printf("Enter no.of students: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++){
        printf("Roll: %d\n,Dept code: %s\n,CGPA: %f\n",class[i].roll,class[i].dept_code,class[i].cgpa);
        scanf ("%d %s %f", &class[i].roll,class[i].dept_code,&class[i].cgpa);
    }
    for (j=0; j<n-1; j++){
        for (i=j+1; i<n; i++) {
            if (class[j].roll > class[i].roll) {
                t = class[j] ;
                class[j] = class[i] ;
                class[i] = t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("Roll: %d",class[i].roll);
        printf("Dept code: %s",class[i].dept_code);
        printf("CGPA: %f",class[i].cgpa);
    }
    return 0;
}