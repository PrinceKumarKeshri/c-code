#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=125,b=12345;
long ax=1234567890;
short s=4043;
float x=2.13459;
double dx=1.1415927;
char c='W';
unsigned long ux=2541567890;
printf("sum of %d and %c = \n",a,c,a+c);
printf("sum of %lf and %f = %lf\n",dx,x,dx+x);
printf("sum of (int)%lf and %ld = %ld\n",((int)dx),ax,((int)dx)+ax);
printf("sum of %d and %f = %f\n",a,x,a+x);
printf("sum of %d and %d = %d\n",s,b,s+b);
printf("sum of %ld and %d = %ld\n",ax,b,ax+b);
printf("sum of %ld and %lu = %lu",ax,ux,ax+ux);
getch();
}