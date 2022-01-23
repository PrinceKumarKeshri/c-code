#include<stdio.h>
#include<conio.h>
void name(void);
void salary(void);
struct Emp
{
	int eno;
	char ename[30];
	float esalary;
};
struct Emp e[5];
int i;
void  main()
{
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Employee number = ");
		scanf("%d",&e[i].eno);
		name();
		salary();
		printf("\n");
	}
	printf("press any key for exit : ");
	getch();
}
void name()
{
	printf("Employee name = ");
	scanf("%s",e[i].ename);
}
void salary()
{
	printf("Employee salary = ");
	scanf("%d",&e[i].esalary);
}