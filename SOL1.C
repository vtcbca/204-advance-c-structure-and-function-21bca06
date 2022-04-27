/*Write a program to create inventory (iid,iname,qty,rate) enter 3
inventory details and print it*/
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int iid[3],qty[3],rate[3];
	char iname[3][30];
};
void main()
{
	struct inventory x;
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter inventory iid:");
		scanf("%d",&x.iid[i]);
		printf("Enter inventory iname:");
		scanf("%s",&x.iname[i]);
		printf("Enter item qty:");
		scanf("%d",&x.qty[i]);
		printf("Enter itrm rate:");
		scanf("%d",&x.rate[i]);
	}
	printf("\n\t\tINVENTORY");
	printf("\n______________________________________\n");
	printf("\nId\tName\tQty\tRate");
	printf("\n_____________________________");
	for(i=0;i<3;i++)
	{
		printf("\n%d",x.iid[i]);
		printf("\t%s",x.iname[i]);
		printf("\t%d",x.qty[i]);
		printf("\t%d",x.rate[i]);
	}
	getch();
}

