#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Emp
{
	int eno;
	char ename[30];
	long int esalary;
};
void  main()
{
	clrscr();
	int n;
	struct Emp* ptr[3];
	int i=0;
	ptr[i] =(struct Emp*) malloc(sizeof(struct Emp));
	if(ptr==NULL)
	{
		printf("Out of Memorry\n");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("Employee number = ");
			scanf("%d",&(ptr[i]->eno));
			printf("Emoloyee name   = ");
			scanf("%s",(ptr[i]->ename));
			printf("Employee salary = ");
			scanf("%dl",&(ptr[i]->esalary));
			printf("\n");
		}
	}
	printf("\npress any key for exit :");
	getch();
}