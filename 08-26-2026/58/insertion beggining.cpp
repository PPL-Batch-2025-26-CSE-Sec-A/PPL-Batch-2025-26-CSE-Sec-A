#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void insertatbeggining(struct node** head,int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(sruct node));
	newnode->data =newdata;
	newnode->next=*head;
	*head=newnode;
}
void printlist(struct node*head){
	while(head!=null){
	printf ("%d ->",head->data);
	head=head->next;
	}
	printf("null\n");
}
int main(){
	struct node*head =null;
	insertatbeggining(&head,10);
	insertatbeggining(&head,20)
	insertatbeggining(&head,30);
	printlist(head);
	return 0;
}
