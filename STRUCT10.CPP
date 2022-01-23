#include<stdio.h>
#include<conio.h>
void rollno(void);
void marks(void);
int len(void);
struct student
{
	char sname[30];
	int srollno;
	int smarks[5];

};
struct student s[1];
int i;
void  main()
{
	clrscr();
	int l;
	l=len();
	for(i=0;i<l;i++)
	{
		printf("Student name = ");
		scanf("%s",s[i].sname);
		rollno();
		marks();
		printf("\n");
	}
	printf("press any key for exit : ");
	getch();
}
int len()
{
	int n;
	printf("Enter number of student data enter you want : ");
	scanf("%d",n);
	return n;
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