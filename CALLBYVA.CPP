#include<stdio.h>
#include<conio.h>
void swap(int, int);
void main()
{
	clrscr();
	int a=10,b=20;
	printf("Before swap value is :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n\n",b);
	swap(a,b);
	printf("After swap value in main function :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n\n",b);
	printf("if value is not swap in the main function means \nthat the swaping value is not fetch in the swap function.\n\n");
	printf("press any key for exit :");
	getch();
}
void swap(int x, int y)
{
	int z=x;
	x=y;
	y=z;
	printf("After swap value in swap function : \n");
	printf("Value of x = %d\n",x);
	printf("Value of y = %d\n\n",y);
}