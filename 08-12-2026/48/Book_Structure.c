#include<stdio.h>
#include<string.h>

struct Book{
    int book_ID;
    char book_name[50];
    char book_author[50];
    float book_price;
    int book_year;
    int book_pages;
    char book_publisher[50];
};

int main(){
    int i,n;
    printf("Enter number of books:");
    scanf("%d",&n);
    struct Book member_log[n];
    for(i=0;i<n;i++){
        printf("Enter %d book ID:",i+1);
        scanf("%d",&member_log[i].book_ID);
        printf("Enter %d book name:",i+1);
        scanf("%s",&member_log[i].book_name);
        printf("Enter %d book author name:",i+1);
        scanf("%s",&member_log[i].book_author);
        printf("Enter %d book price:",i+1);
        scanf("%f",&member_log[i].book_price);
        printf("Enter %d book year:",i+1);
        scanf("%d",&member_log[i].book_year);
        printf("Enter %d total book pages:",i+1);
        scanf("%d",&member_log[i].book_pages);
        printf("Enter %d book publisher name:",i+1);
        scanf("%s",&member_log[i].book_publisher);
        printf("\n");
    }
    printf("--------Details-----------\n");

    for(i=0;i<n;i++){
        printf("book id:%d\n",member_log[i].book_ID);
        printf("book name: %s\n",member_log[i].book_name);
        printf("book author name: %s\n",member_log[i].book_author);
        printf("book price: %.2f\n",member_log[i].book_price);
        printf("book year: %d\n",member_log[i].book_year);
        printf("book pages:%d\n",member_log[i].book_pages);
        printf("book publisher name: %s\n",member_log[i].book_publisher);
        printf("----\n");
    }
    return 0;
}