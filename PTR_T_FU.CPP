#include<stdio.h>
#include<conio.h>
int add(int, int);
int multiply(int,int,int);
int sub(int,int);
void main()
{
	clrscr();
	int r1,r2,r3;
	int (*ptr) (int, int);
	r1=add(10,20);
	printf("Sum   of a and b = %d\n\n",r1);
	r2=multiply(2,3,4);
	printf("Mutiply of a, b and c = %d\n\n",r2);
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
int multiply(int x,int y, int z)
{
	int w;
	w=x*y*z;
	printf("Value   of a, b and c = %d, %d and %d\n",x,y,z);
	return w;
}
int sub(int x,int y)
{
	int z=y-x;
	printf("Value    of a and b = %d, %d\n",x,y);
	return z;
}