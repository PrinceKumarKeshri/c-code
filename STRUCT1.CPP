#include<stdio.h>
#include<conio.h>
struct Emp
{
	int eno;
	char name[30];
	float salary;
};
void  main()
{
	clrscr();
	struct Emp e;
	printf("Size of structure 'struct Emp'= %d\n",sizeof(e));
	printf("Size of structure 'struct Emp'= %d\n",sizeof(struct Emp));
	printf("\npress any key for exit :");
	getch();
}