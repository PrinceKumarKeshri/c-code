#include<stdio.h>
#include<conio.h>
int main()
{
	int option=5;
	switch(option)
	{
		case 1:
		printf("First");
		case 2:
		printf("Second");
		case 3+2:
		printf("Third");
		case 5:
		pritf("Final");
		break;
	}
	return 0;
}