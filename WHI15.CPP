#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1;
	while(i<=10)
	{       if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}