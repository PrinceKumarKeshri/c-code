#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int temp,limit=0;
	temp=1232354;
	while(temp!=0)
	{
		limit=limit+1;
		temp=temp/10;
	}
	printf("limit = %d",limit);
	getch();
}