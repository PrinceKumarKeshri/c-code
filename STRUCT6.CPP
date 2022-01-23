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
	int i;
	struct Emp e[5];
	for(i=0;i<5;i++)
	{
		printf("Employee number = ");
		scanf("%d",&e[i].eno);
	}
	for(i=0;i<5;i++)
	{
		printf("Emoloyee name   = ");
		scanf("%s",&e[i].ename);
	}
	for(i=0;i<5;i++)
	{
		printf("Employee salary = ");
		scanf("%f",&e[i].esalary);
	}
	printf("\n\npress any key for exit :");
	getch();
}