#include<stdio.h>
#include<conio.h>
int add(int, int);
int multiply(int,int);
int sub(int,int);
void main()
{
	clrscr();
	int r1,r2,r3;
	int (*ptr) (int, int);
	ptr=&add;
	r1=ptr(10,20);
	printf("Sum   of a and b = %d\n\n",r1);
	ptr=&multiply;
	r2=ptr(25,125);
	printf("Mutiply of a and b = %d\n\n",r2);
	ptr=&sub;
	r3=ptr(45,23);
	printf("Subtract of b and a = %d\n\n",r3);
	getch();
}
int add(int x, int y)
{
	int z=x+y;
	printf("Value of a and b = %d, %d\n",x,y);
	return z;
}
int multiply(int x,int y)
{
	int w;
	w=x*y;
	printf("Value   of a and b = %d and %d\n",x,y);
	return w;
}
int sub(int x,int y)
{
	int z=y-x;
	printf("Value    of a and b = %d, %d\n",x,y);
	return z;
}