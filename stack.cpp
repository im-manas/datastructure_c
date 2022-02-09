#include <stdio.h>

struct node
{
	int data;
	struct node * link;
}

struct node*top=0;
void push()
{
	struct node * new node;
	new node=(struct node*) malloc(sizeof(struct node));  
	new node-->data=x;
	new node-->link=top;
	top=new node;
}

void main()
{
	push(2);
	push(5);
	push(8);
	display();
	peak();
	pop();
	peak();
	display();
}
