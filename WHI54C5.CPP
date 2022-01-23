#include<stdio.h>
#include<conio.h>
void  main()
{
	clrscr();
	int i=-45,count=0;  // if we will initialize the i by signed integer then
	printf("i=%d\n",i);
	while(i<10,i++)
	{
		printf("prince->%d,%d\t",count,i)   ;
		count++;
	}
	printf("\ntotal number of times hello print = %d\n",count);
	getch();
}       // so the problem is that i store the garbage value thus it will read the element till the garbaze value is not equal to zero
