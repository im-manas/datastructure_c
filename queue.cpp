#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

int cq[10];
int front = -1, rear = 0;
int choice;
void cqinsert(void);
void cqdisplay(void);
int main()
{
	do
	{
		printf("\n 1. Insert");
		printf("\n 2. Display");
		printf("\n 3. Exit");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				cqinsert();
				break;
			case 2:
				cqdisplay();
				break;
			case 3:
				return(0);
		}
		fflush(stdin);
	}
	while(choice!=3);
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
			printf("%d,", cq[i]);
		}
		if(front>rear)
		{
			for(i=front; i<MAXSIZE; i++)
			{
				printf("%d,", cq[i]);
			}
			for(i=0; i<=rear; i++)
			{
				printf("%d,", cq[i]);
			}
			printf("\n");
		}
	}
}
