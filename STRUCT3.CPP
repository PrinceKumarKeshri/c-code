#include<stdio.h>
#include<conio.h>
int check(void);
void main()
{
	clrscr();
	struct Emp  // here struct is declare locally which will be access
	// only in main() funtion if i am try to access struct in any method
	// then it will be raise error so, lets check it what will happen
	{
		int eno;
		char name[30];
		float salary;
	};
	struct Emp e;
	printf("Size of struct Emp = %d \n",sizeof(e));
	printf("Size of struct Emp = %d\n",check());
	printf("\npress any key for exit : ");
	getch();
}
int check()
{
	int si;
	struct Emp e;
	si=sizeof(e);
	return si;
}