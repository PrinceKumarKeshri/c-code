#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("number=");
scanf("%d%*c%d",&num1,&num2);
printf("%d\n",num1);
printf("%d\n",num2);
getch();
}