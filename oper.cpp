#include<stdio.h>
#include<conio.h>

int choice;
void sum(void);
void sub(void);
void mul(void);
void div(void);
int main()
{
	do
	{
		printf("\n================");
		printf("\n 1. Addition");
		printf("\n 2. Substraction");
		printf("\n 3. Multiplication");
		printf("\n 4. Divition");
		printf("\n 5. Exit");
		printf("\n Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				sum();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				return(0);
		}
		
	}
	while(choice!=5);
}

void sum()
{
	int a,b,c;
	printf("\n Enter The first Number : ");
	scanf("%d", &a);
	printf("\n Enter The Second Number : ");
	scanf("%d", &b);
	c = a+b;
	printf("\n Result : %d", c);
	return;
}

void sub()
{
	int a,b,c;
	printf("\n Enter The first Number : ");
	scanf("%d", &a);
	printf("\n Enter The Second Number : ");
	scanf("%d", &b);
	c = a-b;
	printf("\n Result : %d", c);
	return;
}

void mul()
{
	int a,b,c;
	printf("\n Enter The first Number : ");
	scanf("%d", &a);
	printf("\n Enter The Second Number : ");
	scanf("%d", &b);
	c = a*b;
	printf("\n Result : %d", c);
	return;
}

void div()
{
    float a,b,c;
	printf("\n Enter The first Number : ");
	scanf("%d", &a);
	printf("\n Enter The Second Number : ");
	scanf("%d", &b);
	c = a/b;
	printf("\n Result : %f", c);
	printf("\n");
}
