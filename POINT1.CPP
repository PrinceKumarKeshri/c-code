#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i = 100;
	int *ptr;
	ptr=&i;
	printf("i   = %d\n",i);
	printf("\n\nptr = %u \n value of ptr is the adress of i \n",ptr);
	printf("\ni   = %u \n value of i is the address of i\n",&i);
	printf("\nptr = %u \n value of ptr is the address of ptr \n",&ptr);
	printf("\ni   = %d\n",*ptr);
	printf("\ni   = %d\n",*(&i));
	printf("\ni   = %d \n this is the what ptr holds inside its memory location\n",*(&ptr));
	printf("\npress any key for exit :");
	getch();
}