#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Emp
{
	int eno;
	char ename[30];
	long int esalary;
	char elakhs[10];
};
void  main()
{
	clrscr();
	struct Emp* ptr[3];
	char *s1,*s2,*s3;
	int i=0,j=0,num,cmp,cmp_1;
	ptr[i] =(struct Emp*) malloc(sizeof(struct Emp));
	if(ptr==NULL)
	{
		printf("Out of Memorry\n");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("Employee number = ");
			scanf("%d",&(ptr[i]->eno));
			printf("Emoloyee name   = ");
			scanf("%s",(ptr[i]->ename));
			printf("Employee salary = ","lakhs");
			scanf("%dl",&(ptr[i]->esalary));

			printf("\n");
		}
	}
	printf("You want to get the data of any empolyee :\n");
	printf("Yes\nNo\n\n");
	s2="YES";
	s3="NO";
	jump:

		printf("Enter your choice : ");
		scanf("%s",s1);
		cmp=strcmp(strupr(s1),s2);
		cmp_1=strcmp(strupr(s1),s3);
		if(cmp==0)
		{
			carry:
				printf("\nChoose employee number = ");
				for(i=0;i<3;i++)
				{
					if(i<2)
					{
						printf("%d, ",ptr[i]->eno);
					}
					else
					{
						printf("%d\n",ptr[i]->eno);
					}
				}
				printf("Enter  employee number = ");
				scanf("%d",&num);
				while(j<3)
				{
					if(num==ptr[j]->eno)
					{
						printf("\nEmployee details :- \n");
						printf("\tEmployee name   : %s\n",ptr[j]->ename);
						printf("\tEmployee salary : %d lakhs\n\n",ptr[j]->esalary);
						j=0;
						printf("Do you want to get another employee data :\n");
						printf("Yes\nNo\n\n");
						goto jump;
					}

					else if(j<2)
					{
						j++;
					}
					else
					{
						if(j==2)
						{
							printf("\n\tEmployee number is invalid...\n");
							printf("\tTry again.....\n");
							j=0;
							goto carry;

						}
					}
				}


		}
		else if(cmp_1==0)
		{

		}
		else
		{
			printf("\n\tPlease enter a valid choice...\n\n");
			goto jump;
		}
	printf("\npress any key for exit :");
	getch();
}