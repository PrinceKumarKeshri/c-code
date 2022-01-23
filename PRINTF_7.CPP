#include<stdio.h>
#include<conio.h>
void main()
{
char name;
int mobNum,year,month,date;
clrscr();
printf("Name          : ",name);
scanf("%d",&name);
printf("Mobile Number : ",mobNum);
scanf("%s%d",&mobNum);
printf("DOB           : ",year,month,date);
scanf("%d%d%d",&year,month,date);
getch();
}