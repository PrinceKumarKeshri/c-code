#include<stdio.h>
#include<conio.h>
int check(void);
struct Emp          // here struct is global function which will be access
// any main() funtion as well as any method
{
	int eno;
	char name[30];
	float salary;
};
void  main()
{
	clrscr();
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