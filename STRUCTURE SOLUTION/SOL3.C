/*WAP to create structure employee(eid,ename,depetment,basic).perform following operation on using
menu driven program
1. print salary slip with net salary
2. search based on employee ID
3. search based on employee department
4. sort record based on salary
5. sort record based on employee name
6. exit
date:24-03-2022*/
#include<stdio.h>
#include<conio.h>
struct employee
{
	int eid[3],basic[3];
	char ename[10],dept[15];
}x;
void main()
{
	int i,n,j,serch;
	char c;
	clrscr();
	do
	{
		printf("\n\t\t\tMENU_____________________");
		printf("\n1. print salary slip\n2. search based on emplotee ID\n3. search employee based on dept\n");
		printf("4. sort record base on salary\n5. sort record based on employee\n6. exit");
		printf("\n____________________");
		for(i=0;i<3;i++)
		{
			printf("\n EID:");
			scanf("%d",x.eid[i]);
			printf("\n ENAME:");
			flushall();
			scanf("%s",x.ename[i]);
			printf("\n DEPARTMENT:");
			flushall();
			scanf("%s",x.dept[i]);
			printf("\n BASIC:");
			scanf("%d",x.basic[i]);
			printf("\n____________________");
		}
		for(i=0;i<3;i++)
		{
			printf("\nEID: %d",x.eid[i]);
			printf("\nENAME: %s",x.ename[i]);
			printf("\nDEPT: %s",x.dept[i]);
			printf("\nBASIC: %d",x.basic[i]);
			printf("\n____________________");
		}
			printf("\n____________________\nEnter your choice:");
			scanf("%d",&n);
		switch(n)
		{
		case 1:
			printf("\n______SALARY LIST______");
			for(i=0;i<3;i++)
			{
				printf("\n%s = %d,x.ename[i],x.basic[i]");
			}
			break;
		case 2:
			printf("\nEnter id what you serch:");
			scanf("%d",&serch);
			i=serch;
			if(serch==x.eid[i])
			{
				printf("%d",x.eid[i]);
			}
			else
			{
				printf("\nYou are entered EID is not available here:");
			}
			break;
		case 3:
			printf("\n Enter dept_name what you serch:");
			scanf("%d",&serch);
			for(i=0;i<3;i++)
			{
				if(serch==x.dept[i])
				{
					printf("\ndept is %d location",i);
				}
				else
				{
					printf("\nYou are entered dept_name is not available here");
				}
			}
			break;
		case 4:
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
			{
				printf("\nSort base on eid");
			}
			break;
		case 5:
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
				{
					printf("\nSort base on ename");
				}
			break;
		case 6:
			exit(0);
		default:
			printf("\nYou are enter incorrect number");
		}
		printf("\n\n\tDo you want to cantinue ?(yes=y/Y,no=n\N):");
		flushall();
		scanf("%c",&c);
		}while(c=='y'||c=='Y');
		getch();
}


