#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter value of A = ");
scanf("%d",&a);
printf("Enter value of B = ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swap value of A  = %d\nSwap value of B  = %d",a,b);
getch();
}