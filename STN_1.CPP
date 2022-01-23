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
a=a-(a-b);
b=b-(b-a);
printf("Swap value of A = %d\n Swap value of B = %d",a,b);
getch();
}