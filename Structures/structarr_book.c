#include<stdio.h>
struct book
{
    char name[20];
    int pages;
    char author[20];
    float price;
};
void main()
{
    int i;
    struct book b[2]=
    {
        {"Let us C",700,"YPK",300.00},
        {"Wings of Fire",500,"Abdul Kalam",350.00}
    };
    printf("Book details->\n");
    for(i=0;i<2;i++){
        printf("Book No.: %d\n",i+1);
        printf("Name: %s\n",b[i].name);
        printf("Pages: %d\n",b[i].pages);
        printf("Author: %s\n",b[i].author);
        printf("Price: %f",b[i].price);
    }
}