#include<stdio.h>
#include<string.h>
struct book{
	int bookid;
	char bookname[100];
    char author[100];
	int price;
	int year;
	int pages;
	char publisher[100];
};
int main()
{
	struct book b;
	printf("Enter book id:");
	scanf("%d",&b.bookid);
	printf("Enter book name:");
	scanf("%s", b.bookname);
	printf("Enter author:");
	scanf("%s",b.author);
	printf("Enter price:");
	scanf("%d",&b.price);
	printf("Enter year:");
	scanf("%d",&b.year);
	printf("Enter pages:");
	scanf("%d",&b.pages);
	printf("Enter publisher:");
	scanf("%s",b.publisher);
	printf("\n----Book Details----");
	printf("\nBook id %d",b.bookid);
	printf("\nBook Name %s",b.bookname);
	printf("\nAuthor %s",b.author);
	printf("\nPrice %d",b.price);
	printf("\nYear %d",b.year);
	printf("\nPages %d",b.pages);
	printf("\nPublisher %s",b.publisher);
	return 0;
}
