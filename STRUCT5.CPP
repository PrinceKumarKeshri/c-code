#include<stdio.h>
#include<conio.h>
struct Emp
{
	int eno;
	char ename[30];
	float esalary;
};
void  main()
{
	clrscr();
	struct Emp e;
	printf("Employee number = ");
	scanf("%d",&e.eno);
	printf("Emoloyee name   = ");
	scanf("%s",&e.ename);
	printf("Employee salary = ");
	scanf("%f",&e.esalary);
	printf("\n\npress any key for exit :");
	getch();
}