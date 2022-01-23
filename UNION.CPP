#include<stdio.h>
#include<conio.h>
union un
{
	short p;
	short r;

};
void  main()
{
	clrscr();
	union un var;
	var.p=10;
	printf("p = %d\n we are not assign r value.\n\n",var.p);
	printf("p value = %d\n",var.p);
	printf("r value = %d\n",var.r);
	var.r=20;
	printf("\n\nr = %d\n value of r is replace the value of p and store\n value of r at that loction where value of p is \n store.\n\n",var.r);
	printf("p value = %d\n",var.p);
	printf("r value = %d\n",var.r);
	printf("\n\npress any key for exit :");
	getch();
}