#include<stdio.h>
struct complex{
    int r;
    int im;
};
int main(){
    struct complex n1={5,8};
    struct complex *ptr=&n1;
    printf("Real part= %d\n",(*ptr).r);
    printf("Imaginary part= %d",(*ptr).im);
    return 0;
}