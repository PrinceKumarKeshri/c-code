#include<stdio.h>
#include<conio.h>
# define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int isFull(void);
int isEmpty(void);
int pop(void);
void peek(void);
void traverse(void);
void main()
{
	clrscr();
	int ch,item;
	while(1)
	{
		printf("Stack operation :\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Traverse\n");
		printf("5.Quit\n");

		printf("\nEnter your choice : ",ch);
		scanf("%d",&ch);

		if(ch==5)
		{
			break;
		}

		switch(ch)
		{
			case 1 : printf("\n\tEnter the element = ");
				 scanf("%d",&item);
				 push(item);
				 break;
			case 2 : item = pop();
				 if(item==0)
				 {
					printf("\n\tStack is underflow ......\n\n");
				 }
				 else
				 {
					printf("\n\tPopped item = %d\n\n",item);
				 }
				 break;
			case 3 : peek();
				 break;
			case 4 : traverse();
				 break;
			default: printf("\n\tInvalid input .......\n\n");
		}
	}
	printf("\npress any key for exit .......");
	getch();
}
void push(int ele)
{
	if(isFull())
	{
		printf("\tstack is overflow ......\n\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("\tPushed element = %d\n\n",ele);
	}
}
int isFull()
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop()
{
	if(isEmpty())
	{
		return 0;
	}
	else
	{
		printf("\n\tItem popped ......");
		return stack[top--];
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void peek()
{
	if(isEmpty())
	{
		printf("\n\tStack is underflow .......\n\n");
	}
	else
	{
		int ele;
		ele=stack[top];
		printf("\n\tPeeked element = %d\n\n",ele);
	}
}
void traverse()
{
	if(isEmpty())
	{
		printf("\n\tStack is underflow .......\n\n");
	}
	else
	{
		int i;
		printf("\n\tStack element : \n\n");
		for(i=top;i>=0;i--)
		{
			printf("\tstack[%d] = ",i+1);
			printf("%d\n",stack[i]);
		}
	}
	printf("\n");
}