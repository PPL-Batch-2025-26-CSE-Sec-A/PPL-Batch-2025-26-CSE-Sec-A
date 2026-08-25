#include <stdio.h>

struct Book {
int bookid;
char bookname[100];
char author[100];
float price;
int year;
int pages;
char publisher[100];
};
int main(){
    struct Book b;
    printf("Enter Book ID:");
    scanf("%d", &b.bookid);
    printf("Enter Book Name:");
    scanf("%[^\n]s", b.bookname);
    printf("Enter Author:");
    scanf("%[^\n]s", b.author);
    printf("Enter price:");
    scanf("%f", &b.price);
    printf("Enter Year of Publication:");
    scanf("%d", &b.year);
    printf("Enter Number of Pages:");
    scanf("%d", &b.pages);
    printf("Enter Publisher:");
    scanf("%[^\n]s", b.publisher);

    printf("\n---Book Details---\n");
    printf("ID: %d\n", b.bookid);
    printf("Name: %s\n", b.bookname);
    printf("Author: %s\n", b.author);
    printf("price: %f\n", b.price);
    printf("Year: %d\n", b.year);
    printf("pages: %d\n", b.pages);
    printf("Publisher: %s\n", b.publisher);
    return 0;
}    