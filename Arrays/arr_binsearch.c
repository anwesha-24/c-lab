#include<stdio.h>
void main()
{
    int a[6],i,f,m,l,e;
    printf("Enter elements: ");
    for(i=0;i<6;++i)
    {
        printf("%d-> ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&e);
    f=0;
    l=5;
    m=(f+l)/2;
    while(f<=l){
        if(a[m]<e){
            f=m+1;
        }
        else if(a[m]==e){
            printf("%d found at position %d",e,m+1);
            break;
        }
        else{
            l=m-1;
        }
        m=(f+l)/2;
    }
    if(f>l){
        printf("NOT FOUND!!");
    }
}