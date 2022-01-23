#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=0,j=0;
	while(++i<=5)
	{
		while(++j<=5)
		{
			printf("j = %d\n",j);
		}
		printf("j = %d\n",j);
	}
	printf("i=%d\tj=%d",i,j);
	getch();
}