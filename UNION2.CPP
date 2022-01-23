#include<stdio.h>
#include<conio.h>
union un
{
	char p[30];
	short r;
	float f;

};
void  main()
{
	clrscr();
	union un var={"prince"};
	printf("p = %s\n we are not assign r value.\n\n",var.p);
	printf("p value = %s\n",var.p);
	printf("r value = %d\n",var.r);
	printf("f value = %f\n",var.f);
	var.r=121326;
	printf("\n\nr = %d\n value of r is replace the value of p and store\n value of r at that loction where value of p is \n store.\n\n",var.r);
	printf("p value = %s\n",var.p);
	printf("r value = %d\n",var.r);
	printf("f value = %f\n",var.f);
	var.f=12.26;
	printf("\n\nf = %d\n value of f is replace the value of r and store\n value of f at that loction where value of r is \n store.\n\n",var.f);
	printf("p value = %s\n",var.p);
	printf("r value = %d\n",var.r);
	printf("f value = %f\n",var.f);

	printf("\n\npress any key for exit :");
	getch();
}