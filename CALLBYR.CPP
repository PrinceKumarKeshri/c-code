#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
int a=10,b=20;
void main()
{
	clrscr();
	printf("Before swap value is :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n\n",b);
	swap(&a,&b);
	printf("After swap value in main function :\n");
	printf("Value of a = %d\n",a);
	printf("Value of b = %d\n\n",b);

	printf("press any key for exit :");
	getch();
}
void swap(int* x, int* y)
{
	int* z;
	z=x;
	x=y;
	y=z;
	a=*x;
	b=*y;
	printf("After swap value in swap function : \n");
	printf("Value of x = %d\n",*x);
	printf("Value of y = %d\n\n",*y);
}
