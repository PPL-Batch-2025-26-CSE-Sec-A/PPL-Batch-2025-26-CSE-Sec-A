#include<stdio.h>
#include<string.h>

struct Book
{
    int bookid;
    char bookname[50];
    char author[50];
    float price;
    int year;
    int pages;
    char publisher[50];
};
int main()
{
    struct Book b;
    printf("Enter Book ID ");
    scanf("%d", &b.bookid);
    printf("Enter Book Name ");
    scanf(" %[^\n]", b.bookname);
    printf("Enter Author ");
    scanf(" %[^\n]", b.author);
    printf("Enter Price ");
    scanf("%f", &b.price);
    printf("Enter Year ");
    scanf("%d", &b.year);
    printf("Enter Pages ");
    scanf("%d", &b.pages);
    printf("Enter Publisher ");
    scanf(" %[^\n]", b.publisher);
    printf("\n---Book Details---\n");
    printf("Book ID is %d\n",b.bookid);
    printf("Book Name is %s\n",b.bookname);
    printf("Author is %s\n",b.author);
    printf("Price is .2f\n",b.price);
    printf("Year is %d\n",b.year);
    printf("Pages is %d\n",b.pages);
    printf("Publisher is %s\n",b.publisher);
    return 0;
}
