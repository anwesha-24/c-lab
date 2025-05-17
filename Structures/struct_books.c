#include<stdio.h>
#include<string.h>
struct books{
    char title[50];
    int book_id;
};
void main()
{
    struct books book1;
    struct books book2;
    strcpy(book1.title,"HP and the Chamber of Secrets");
    book1.book_id=24609;
    strcpy(book2.title,"HP and the Order of Phoenix");
    book2.book_id=76190;
    printf("Book1 title: %s\n",book1.title);
    printf("Book1 Book_Id: %d\n",book1.book_id);
    printf("Book2 title: %s\n",book2.title);
    printf("Book2 Book Id: %d\n",book2.book_id);
}