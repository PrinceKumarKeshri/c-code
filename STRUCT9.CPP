#include<stdio.h>
#include<conio.h>
void rollno(void);
void marks(void);
struct student
{
	char sname[30];
	int srollno;
	int smarks[5];

};
struct student s[3];
int i;
void  main()
{
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Student name        = ");
		scanf("%s",s[i].sname);
		rollno();
		marks();
		printf("\n");
	}
	printf("press any key for exit : ");
	getch();
}
void rollno()
{
	printf("Student roll number = ");
	scanf("%d",s[i].srollno);
}
void marks()
{
	printf("Student marks : \n");
	int j;
	for(j=0;j<5;j++)
	{
		printf("sub %d = ",j+1);
		scanf("%d",&s[i].smarks[j]);
	}
}