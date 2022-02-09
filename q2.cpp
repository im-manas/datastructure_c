#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10


int cq[10];
int front = -1, rear = 0;
int choice;
void cqinsert(void);
int cqdelete(void);
void cqdisplay(void);
void peek(void);
int main()
{
	do
	{
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display");
		printf("\n 4. Peek");
		printf("\n 5. Exit");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				cqinsert();
				break;
			case 2:
				cqdelete();
				break;
			case 3:
				cqdisplay();
				break;
			case 4:
				peek();
				break;
			case 5:
				return(0);
		}
		fflush(stdin);
	}
	while(choice!=5);
}

void cqinsert()
{
	int num;
	if(front==(rear+1)%MAXSIZE)
	{
		printf("\nQueue is full");
		return;
	}
	else
	{
		printf("\nEnter the Element to insert : ");
		scanf("%d", &num);
		if(front==-1)
		front=rear=0;
	else
	    rear=(rear+1)%MAXSIZE;
	    cq[rear]=num;
	}
	return;
}

int cqdelete()
{
	int num;
	if(front==-1)
	{
		printf("\nQueue is empty.");
		return(0);
	}
	else
	{
		num=cq[front];
		printf("\nDelete item is : %d", cq[front]);
		if(front == rear)
		front=rear=-1;
		else 
		front=(front+1)%MAXSIZE;
	}
	return(num);
}

void cqdisplay()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is empty.");
		return;
	}
	else
	{
		printf("\nThe element of the queue is : ");
		for(i=front; i<=rear; i++)
		{
			printf("\n %d", cq[i]);
		}
		if(front>rear)
		{
			for(i=front; i<MAXSIZE; i++)
			{
				printf("\n %d", cq[i]);
			}
			for(i=0; i<=rear; i++)
			{
				printf("\n %d", cq[i]);
			}
			printf("\n");
		}
	}
}

void peek()
{
	if(front == -1 && rear == -1)
	{
	 printf("\nQueue is empty.");	
	}
	else
	printf("\nPeek element is : %d", cq[front]);
}
