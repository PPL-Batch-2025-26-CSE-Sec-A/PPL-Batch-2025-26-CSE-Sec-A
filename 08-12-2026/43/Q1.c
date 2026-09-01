#include <stdio.h>

// Define structure for Book
struct Book {
    int bookid;
    char bookname[100];
    char author[100];
    float price;
    int year;
    int pages;
    char publisher[100];
};

int main() {
    struct Book b;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &b.bookid);

    printf("Enter Book Name: ");
    scanf(" %[^\n]s", b.bookname);

    printf("Enter Author Name: ");
    scanf(" %[^\n]s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("Enter Publication Year: ");
    scanf("%d", &b.year);

    printf("Enter Number of Pages: ");
    scanf("%d", &b.pages);

    printf("Enter Publisher: ");
    scanf(" %[^\n]s", b.publisher);

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Book ID          : %d\n", b.bookid);
    printf("Book Name        : %s\n", b.bookname);
    printf("Author           : %s\n", b.author);
    printf("Price            : %.2f\n", b.price);
    printf("Publication Year : %d\n", b.year);
    printf("Pages            : %d\n", b.pages);
    printf("Publisher        : %s\n", b.publisher);

    return 0;
}