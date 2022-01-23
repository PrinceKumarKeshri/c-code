#include<stdio.h>
#include<conio.h>
struct Emp
{
	char eno[20];
	int ename;
	int esalary;
};
void main()
{
	clrscr();
	char* cp;
	char c;
	int* ip;
	int i;
	float* fp;
	float  f;
	struct Emp e1;
	struct Emp* e;
	printf("Size of char* pointer = %d\n",sizeof(cp));
	printf("Size od char variable = %d",sizeof(c));
	printf("\n\nSize of int* pointer = %d\n",sizeof(ip));
	printf("Size of int variable = %d",sizeof(i));
	printf("\n\nSize of float* pointer = %d\n",sizeof(fp));
	printf("Size of float variable = %d",sizeof(f));
	printf("\n\nSize of struct Emp* pointer = %\d\n",sizeof(e));
	printf("Size of struct Emp variable = %d",sizeof(e1));
	getch();
}
