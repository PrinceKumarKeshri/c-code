#include<stdio.h>
#include<conio.h>
# define MAX 5
int stack[5];
int top=-1;
void push(void);
void pop(void);
void traverse(void);
void main()
{
	clrscr();
	int ch,item;
	while(1)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Traverse\n");
		printf("4.Quit\n");

		printf("Enter your choice : ",ch);
		scanf("%d",&ch);

		if(ch==4)
		{
			break;
		}

		switch(ch)
		{
			case 1 : push();
				 break;
			case 2 : pop();
				 break;
			case 3 : traverse();
				 break;
			default: printf("Invalid input\n\n");
		}
	}
	getch();
}
void push()
{
	int ele;
	if(top==MAX-1)
	{
		printf("\nstack is overflow\n");
	}
	else
	{
		printf("Pushed element = ");
		scanf("%d",ele);
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	int ele;
	if(top==-1)
	{
		printf("Stack is underflow");
	}
	else
	{
		ele=stack[top];
		top=top--;
		printf("Popped item = %d ",ele);
	}
}
void traverse()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is underflow\n");
	}
	else
	{
		printf("Stack element : ");
		for(i=top;i<=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}